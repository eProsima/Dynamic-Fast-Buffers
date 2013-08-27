BASEDIR=.
OUTDIR= $(BASEDIR)/output
CC=gcc
CPP=g++
LN=g++
AR=ar
CP=cp
LNK=ln


-include $(EPROSIMADIR)/building/makefiles/eProsima.mk
ifeq ($(MAKECMDGOALS), unitTests)
	include $(BASEDIR)/utils/pcTests/UnitTests/unitTests.mk
else
ifeq ($(MAKECMDGOALS), test)
	include $(BASEDIR)/utils/pcTests/TestsDFB/tests.mk
else
ifeq ($(MAKECMDGOALS), hwi86)
	include $(BASEDIR)/examples/c++/HelloWorldDFB/hwi86.mk
else
ifeq ($(MAKECMDGOALS), hwx64)
	include $(BASEDIR)/examples/c++/HelloWorldDFB/hwx64.mk
else
	include $(BASEDIR)/building/makefiles/dfb.mk
endif
endif
endif
endif





.PHONY: all test unitTests hworldi86 hworldx64

all: dfb 

test: tests

unitTests: utests

hworldi86: hwi86

hworldx64: hwx64

clean:
	@rm -f $(OBJS)
	@rm -f $(DEPS)

ifneq ($(MAKECMDGOALS), clean)
-include $(DEPS)
endif
