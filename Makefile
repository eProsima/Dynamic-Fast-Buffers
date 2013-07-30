BASEDIR=.
OUTDIR= $(BASEDIR)/output
CC=gcc
CPP=g++
LN=g++
AR=ar
CP=cp


-include $(EPROSIMADIR)/building/makefiles/eProsima.mk
ifeq ($(MAKECMDGOALS), test)
	include $(BASEDIR)/utils/pcTests/UnitTests/unitTests.mk
else
	include $(BASEDIR)/building/makefiles/dfb.mk
endif

.PHONY: all test

all: dfb 

test: utests

clean:
	@rm -f $(OBJS)
	@rm -f $(DEPS)

ifneq ($(MAKECMDGOALS), clean)
-include $(DEPS)
endif
