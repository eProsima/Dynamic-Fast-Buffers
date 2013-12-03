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
	# CDR & Marshallingheaders
	cp -r ../../../../../CDR/include tmp/$project
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	
	# Copy DFB libraries
	mkdir -p tmp/$project/lib

	# Copy i86 DFB libraries. Preserve links.
	mkdir -p tmp/$project/lib/i86Linux2.6gcc
	cp -d ../../../../lib/i86Linux2.6gcc/* tmp/$project/lib/i86Linux2.6gcc
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy x64 DFB libraries. Preserve links.
	mkdir -p tmp/$project/lib/x64Linux2.6gcc
	cp -d ../../../../lib/x64Linux2.6gcc/* tmp/$project/lib/x64Linux2.6gcc
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	
	# Copy CDR libraries
	mkdir -p tmp/$project/lib

	# Copy i86 CDR libraries. Preserve links.
	mkdir -p tmp/$project/lib/i86Linux2.6gcc
	cp -d ../../../../../CDR/lib/i86Linux2.6gcc/* tmp/$project/lib/i86Linux2.6gcc
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy x64 CDR libraries. Preserve links.
	mkdir -p tmp/$project/lib/x64Linux2.6gcc
	cp -d ../../../../../CDR/lib/x64Linux2.6gcc/* tmp/$project/lib/x64Linux2.6gcc
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	cd tmp
	tar cvzf "../${project}_${version}_${distroversion}.tar.gz" $project
	errorstatus=$?
	cd ..
	if [ $errorstatus != 0 ]; then return; fi
}

if [ $# -lt 1 ]; then
	echo "Needs as parameter the version of the product $project"
	exit -1
fi

version=$1

# Take GCC version
. $EPROSIMADIR/scripts/common_pack_functions.sh getGccVersion

# Get distro version
. $EPROSIMADIR/scripts/common_pack_functions.sh getDistroVersion

# Create the temporaly directory.
mkdir tmp
mkdir tmp/$project

installer

# Remove temporaly directory
rm -rf tmp

if [ $errorstatus == 0 ]; then
    echo "INSTALLER SUCCESSFULLY"
else
    echo "INSTALLER FAILED"
fi

exit $errorstatus

