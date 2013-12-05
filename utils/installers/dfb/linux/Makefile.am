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
	mkdir -p $(DESTDIR)$(datadir)/doc/dfb/html; \
	cp -r doc/html/* $(DESTDIR)$(datadir)/doc/dfb/html; \
	mkdir -p $(DESTDIR)$(datadir)/doc/dfb/pdf; \
	cp -r doc/pdf/* $(DESTDIR)$(datadir)/doc/dfb/pdf; \
	mkdir -p $(DESTDIR)$(datadir)/dfb/examples; \
	cp -r examples/* $(DESTDIR)$(datadir)/dfb/examples; \
	rm -r $(DESTDIR)$(datadir)/dfb/examples/c++/HelloWorldDFB/*.sln
	rm -r $(DESTDIR)$(datadir)/dfb/examples/c++/HelloWorldDFB/*.vcxproj
	rm -r $(DESTDIR)$(datadir)/dfb/examples/c++/HelloWorldDFB/*.vcxproj.filters

uninstall-hook:
	rm -r $(DESTDIR)$(datadir)/doc/dfb/html; \
	rm -r $(DESTDIR)$(datadir)/doc/dfb/pdf; \
	rm -r $(DESTDIR)$(datadir)/doc/dfb; \
	rm -r $(DESTDIR)$(datadir)/../include/dfb; \
	rm -r $(DESTDIR)$(datadir)/dfb
