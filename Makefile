BASEDIR=.
OUTDIR= $(BASEDIR)/output
CC=gcc
CPP=g++
LN=g++
AR=ar
CP=cp


-include $(EPROSIMADIR)/building/makefiles/eProsima.mk
ifeq ($(MAKECMDGOALS), unitTests)
	include $(BASEDIR)/utils/pcTests/UnitTests/unitTests.mk
else
ifeq ($(MAKECMDGOALS), tests)
	include $(BASEDIR)/utils/pcTests/TestsDFB/tests.mk
else
	include $(BASEDIR)/building/makefiles/dfb.mk
endif
endif

.PHONY: all test unitTests

all: dfb 

test: tests

unitTests: utests

clean:
	@rm -f $(OBJS)
	@rm -f $(DEPS)

ifneq ($(MAKECMDGOALS), clean)
-include $(DEPS)
endif
