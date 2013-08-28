#!/bin/sh

#: This script pack FastBuffers product for any platform in Linux.
#
# This script needs the next programs to be run.
# - subversion
# - libreoffice
# - ant
# - doxygen
# Also this script needs the eProsima.documentation.changeVersion macro installed in the system.
#
# Fedora 17: This script has to be run in a Fedora 17 x64.
#            The system has to have installed: libgcc.i686 and libstdc++.i686

errorstatus=0

function package
{
    # Get current version of GCC.
    . $EPROSIMADIR/scripts/common_pack_functions.sh getGccVersion

    # Update and compile CDR library.
    cd ../CDR
    
    # Get the current version of CDR
    . $EPROSIMADIR/scripts/common_pack_functions.sh getVersionFromCPP cdrversion include/cpp/Cdr_version.h
    
    # Update CDR library.
    svn update
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile CDR library for i86.
    rm -rf output
    EPROSIMA_TARGET="i86Linux2.6gcc${gccversion}"
    rm -rf lib/$EPROSIMA_TARGET
    make
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile CDR library for x64.
    rm -rf output
    EPROSIMA_TARGET="x64Linux2.6gcc${gccversion}"
    rm -rf lib/$EPROSIMA_TARGET
    make
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ../DynamicFastBuffers

    # Get the current version of DynamicFastBuffers
    . $EPROSIMADIR/scripts/common_pack_functions.sh getVersionFromCPP dfbversion include/cpp/DFB_version.h
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Try to add platform
#	    setPlatform "i86Linux2.6gcc${gccversion}"
#	    setPlatform "x64Linux2.6gcc${gccversion}"

    # Update and compile DynamicFastBuffers application.
    # Update DynamicFastBuffers application
    svn update
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile FastBuffers for i86.
    rm -rf output
    EPROSIMA_TARGET="i86Linux2.6gcc${gccversion}"
    rm -rf lib/$EPROSIMA_TARGET
    make
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    
    # Compile FastBuffers for x64.
    rm -rf output
    EPROSIMA_TARGET="x64Linux2.6gcc${gccversion}"
    rm -rf lib/$EPROSIMA_TARGET
    make
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Create PDFS from documentation.
    cd doc
    # Installation manual
    soffice --headless "macro:///eProsima.documentation.changeVersion($PWD/DFB - Installation Manual.odt,$dfbversion)"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp "DFB - Installation Manual.pdf" $PWD/pdf
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    rm "DFB - Installation Manual.pdf"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # User manual
    soffice --headless "macro:///eProsima.documentation.changeVersion($PWD/DFB - User Manual.odt,$dfbversion)"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp "DFB - User Manual.pdf" $PWD/pdf
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    rm "DFB - User Manual.pdf"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ..

    # Create README
	    soffice --headless "macro:///eProsima.documentation.changeVersionToHTML($PWD/README.odt,$dfbversion)"
	    errorstatus=$?
	    if [ $errorstatus != 0 ]; then return; fi

    # Create doxygen information.
    #Export version
    export VERSION_DOX=$dfbversion
    mkdir -p doc/html
    mkdir -p utils/doxygen/output
    mkdir -p utils/doxygen/output/doxygen
    cd utils/doxygen
    doxygen doxyfile
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile the latex document
    cd output/doxygen/latex
    make
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ../../../../../

    # Create installers
    cd utils/installers/dfb/linux
    ./setup_linux.sh $dfbversion
    errorstatus=$?
    cd ../../../
    if [ $errorstatus != 0 ]; then return; fi

    # Remove the doxygen tmp directory
    rm -rf utils/doxygen/output
}

# Check that the environment.sh script was run.
if [ "$EPROSIMADIR" == "" ]; then
    echo "environment.sh must to be run."
    exit -1
fi

# Go to root
cd ../..

package

if [ $errorstatus == 0 ]; then
    echo "PACKAGING SUCCESSFULLY"
else
    echo "PACKAGING FAILED"
fi

#	exit $errorstatus

