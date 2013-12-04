#!/bin/sh

# This scripts creates a tar.gz file with all the linux installation
# Also it creates a RPM package.
# @param The version of the project

# To create the source tar file you have to install next packages:
# autoconf, automake, libtool

# To create RPM in Fedora you have to follow this section on the link:
#   https://fedoraproject.org/wiki/How_to_create_an_RPM_package#Preparing_your_system

# To create RPM in CentOs you have to follow this link:
#   http://wiki.centos.org/HowTos/SetupRpmBuildEnvironment

project="DynamicFastBuffers"

function installer
{
	# Copy documentation.
	mkdir -p tmp/$project/doc
	mkdir -p tmp/$project/doc/pdf
	cp "../../../../doc/pdf/DFB - Installation Manual.pdf" tmp/$project/doc/pdf
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp "../../../../doc/pdf/DFB - User Manual.pdf" tmp/$project/doc/pdf
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp -r "../../../doxygen/output/doxygen/html" tmp/$project/doc/html
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp "../../../doxygen/output/doxygen/latex/refman.pdf" "tmp/$project/doc/pdf/API C++ Manual.pdf"
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy example.
	mkdir -p tmp/$project/examples
	cp -r ../../../../examples tmp/$project
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy licenses.
	cp ../../../../DYNAMIC_FAST_BUFFERS_LICENSE.txt tmp/$project
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp ../../../../LGPLv3_LICENSE.txt tmp/$project
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy README
	cp ../../../../README.html tmp/$project
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# DFB headers
	mkdir -p tmp/$project/include
	cp -r ../../../../include tmp/$project
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy eProsima header files
	mkdir -p tmp/$project/include/dfb/eProsima_cpp
	cp $EPROSIMADIR/code/eProsima_cpp/eProsima_auto_link.h tmp/$project/include/dfb/eProsima_cpp
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy DFB sources
	mkdir -p tmp/$project/src
	cp -r ../../../../src/cpp tmp/$project/src
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
        if [ -d tmp/$project/src/cpp/.svn ]; then
            find tmp/$project/src/cpp -iname .svn -exec rm -rf {} \;
        fi

	# Copy autoconf configuration files.
	cp configure.ac tmp/$project
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp Makefile.am tmp/$project
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp include_Makefile.am tmp/$project/include/Makefile.am
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Generate autoconf files
	cd tmp/$project
	sed -i "s/VERSION/${version}/g" configure.ac
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	sed -i "s/VERSION_MAJOR/`echo ${version} | cut -d. -f1`/g" Makefile.am
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	sed -i "s/VERSION_MINOR/`echo ${version} | cut -d. -f2`/g" Makefile.am
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	autoreconf --force --install
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cd ../..
	
	cd tmp
	tar cvzf "../${project}_${version}.tar.gz" $project
	errorstatus=$?
	cd ..
	if [ $errorstatus != 0 ]; then return; fi
}

if [ $# -lt 1 ]; then
	echo "Needs as parameter the version of the product $project"
	exit -1
fi

version=$1

# Get distro version
. $EPROSIMADIR/scripts/common_pack_functions.sh getDistroVersion

# Create the temporaly directory.
mkdir tmp
mkdir tmp/$project

installer

#TODO Check the distro to know if RMP is supported.
#[ $errorstatus == 0 ] && { rpminstaller; }

# Remove temporaly directory
rm -rf tmp

if [ $errorstatus == 0 ]; then
    echo "INSTALLER SUCCESSFULLY"
else
    echo "INSTALLER FAILED"
fi

exit $errorstatus

