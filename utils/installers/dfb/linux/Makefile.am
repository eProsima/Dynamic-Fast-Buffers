SUBDIRS = include

lib_LTLIBRARIES = libdfb.la
libdfb_la_SOURCES = src/cpp/CommonData.cpp \
			src/cpp/BytecodeAPI.cpp \
			src/cpp/SerializerAPI.cpp \
			src/cpp/TypecodeAPI.cpp \
			src/cpp/exceptions/NotEnoughParamsException.cpp \
			src/cpp/exceptions/WrongParamException.cpp \
			src/cpp/exceptions/WrongTypeException.cpp

libdfb_la_LDFLAGS = -version-number VERSION_MAJOR:VERSION_MINOR:0

AM_CPPFLAGS = -std=c++0x -Iinclude

dfb_licenciasdir = $(datadir)/doc/dfb
dfb_licencias_DATA = DYNAMIC_FAST_BUFFERS_LICENSE.txt LGPLv3_LICENSE.txt README.html

install-data-hook:
	mkdir -p $(datadir)/doc/dfb/html; \
	cp -r doc/html/* $(datadir)/doc/dfb/html; \
	mkdir -p $(datadir)/doc/dfb/pdf; \
	cp -r doc/pdf/* $(datadir)/doc/dfb/pdf

uninstall-hook:
	rm -r $(datadir)/doc/dfb/html; \
	rm -r $(datadir)/doc/dfb/pdf; \
	rm -r $(datadir)/doc/dfb; \
	rm -r $(datadir)/include/dfb
