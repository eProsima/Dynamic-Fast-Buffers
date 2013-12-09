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
    #. $EPROSIMADIR/scripts/common_pack_functions.sh getGccVersion

    # Update and compile CDR library.
    cd ../CDR
    
    # Get the current version of CDR
    . $EPROSIMADIR/scripts/common_pack_functions.sh getVersionFromCPP cdrversion include/fastcdr/FastCdr_version.h
    
    # Update CDR library.
    svn update
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile and packageing FastCDR library for all archictectures
    cd utils/scripts
    ./package_fastcdr.sh
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ../../../DynamicFastBuffers

    # Get the current version of DynamicFastBuffers
    . $EPROSIMADIR/scripts/common_pack_functions.sh getVersionFromCPP dfbversion include/dfb/DFB_version.h
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Update DynamicFastBuffers application
    svn update
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile FastBuffers for i86.
    rm -rf output
    EPROSIMA_TARGET="i86Linux2.6gcc"
    rm -rf lib/$EPROSIMA_TARGET
    make
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    
    # Compile FastBuffers for x64.
    rm -rf output
    EPROSIMA_TARGET="x64Linux2.6gcc"
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
	    soffice --headless "macro:///eProsima.documentation.changeHyperlinksAndVersionToHTML($PWD/README.odt,$dfbversion,./doc/,./)"
	    errorstatus=$?
	    if [ $errorstatus != 0 ]; then return; fi

    # Create doxygen information.
    # Export version
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

    # Generate distribution
    distroName="Dynamic_Fast_Buffers"
    . $EPROSIMADIR/scripts/common_pack_functions.sh getDistroVersion
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    distro=`cat /etc/rpm/macros.dist  | grep %dist | cut -d. -f2`
    
    mkdir -p tmpRelease
    cp ~/rpmbuild/RPMS/i686/fastcdr-${cdrversion}-1.${distro}.i686.rpm tmpRelease
    cp ~/rpmbuild/RPMS/i686/dynamicfastbuffers-${dfbversion}-1.${distro}.i686.rpm tmpRelease
    cp ~/rpmbuild/RPMS/x86_64/fastcdr-${cdrversion}-1.${distro}.x86_64.rpm tmpRelease
    cp ~/rpmbuild/RPMS/x86_64/dynamicfastbuffers-${dfbversion}-1.${distro}.x86_64.rpm tmpRelease
    
    cd tmpRelease
    tar cvzf "../installers/dfb/linux/eProsima_${distroName}_${dfbversion}_${distroversion}.tar.gz" *
   errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ..

    # Remove temp directory
    rm -rf tmpRelease
    cd ..
    rm -rf utils/installers/dfb/linux/tmp
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

