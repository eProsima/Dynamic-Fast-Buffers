OUTDIR= .
BASEDIR= ../../..
CC=gcc
CPP=g++
LN=g++
AR=ar
CP=cp
LNK=ln

-include $(EPROSIMADIR)/building/makefiles/eProsima.mk

DFB_OUTDIR= $(OUTDIR)/testDFB
DFB_OUTDIR_DEBUG = $(DFB_OUTDIR)/debug
DFB_OUTDIR_RELEASE = $(DFB_OUTDIR)/release

DFB_SED_OUTPUT_DIR_DEBUG= $(subst /,\\/,$(DFB_OUTDIR_DEBUG))
DFB_SED_OUTPUT_DIR_RELEASE= $(subst /,\\/,$(DFB_OUTDIR_RELEASE))

DFB_TARGET_FOLDER=  $(OUTDIR)/$(EPROSIMA_TARGET)
DFB_TARGET_EXE= $(DFB_TARGET_FOLDER)/testsDFB.sh

DFB_CFLAGS= $(CFLAGS)
DFB_LDFLAGS= $(LDFLAGS)

DFB_CFLAGS += $(CFLAGS) -std=c++11
DFB_CFLAGS_DEBUG += $(CFLAGS_DEBUG) -std=c++11

DFB_LIBS_DEBUG= $(LIBS_DEBUG) -lcdrd -ldfbd
DFB_LIBS= $(LIBS) -lcdr -ldfb

DFB_LIBS_DEBUG_DIR= -L$(BASEDIR)/lib/$(EPROSIMA_TARGET) -L$(BASEDIR)/../CDR/lib/$(EPROSIMA_TARGET)
DFB_LIBS_DIR= $(DFB_LIBS_DEBUG_DIR)

DFB_INCLUDE_DIRS= $(INCLUDE_DIRS) -I$(BASEDIR)/include -I$(BASEDIR)/include/cpp \
		  -I$(EPROSIMADIR)/code -I$(BASEDIR)/../CDR/include

DFB_SRC_CPPFILES= $(BASEDIR)/utils/pcTests/TestsDFB/Main.cpp

# Project sources are copied to the current directory
DFB_SRCS= $(DFB_SRC_CFILES) $(DFB_SRC_CPPFILES)

# Source directories
DFB_SOURCES_DIRS_AUX= $(foreach srcdir, $(dir $(DFB_SRCS)), $(srcdir))
DFB_SOURCES_DIRS= $(shell echo $(DFB_SOURCES_DIRS_AUX) | tr " " "\n" | sort | uniq | tr "\n" " ")

DFB_OBJS_DEBUG = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(DFB_SRCS)))), $(DFB_OUTDIR_DEBUG)/$(obj))
DFB_DEPS_DEBUG = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(DFB_SRCS)))), $(DFB_OUTDIR_DEBUG)/$(dep))
DFB_OBJS_RELEASE = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(DFB_SRCS)))), $(DFB_OUTDIR_RELEASE)/$(obj))
DFB_DEPS_RELEASE = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(DFB_SRCS)))), $(DFB_OUTDIR_RELEASE)/$(dep))
DFB_EXE_RELEASE = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(DFB_SRCS)))), $(DFB_OUTDIR_RELEASE)/$(obj))

OBJS+= $(DFB_OBJS_DEBUG) $(DFB_OBJS_RELEASE)
DEPS+= $(DFB_DEPS_DEBUG) $(DFB_DEPS_RELEASE)

.PHONY: tests checkDFBDirectories

tests: checkDFBDirectories $(DFB_TARGET_EXE)

checkDFBDirectories:
	@mkdir -p $(DFB_OUTDIR_RELEASE)
	@mkdir -p $(DFB_TARGET_FOLDER)
	@mkdir -p $(EPROSIMA_LIBRARY_PATH)/proyectos/$(EPROSIMA_TARGET)

$(DFB_TARGET_EXE): $(DFB_EXE_RELEASE)
	$(LN) $(LDFLAGS) -o $(DFB_TARGET_EXE) $(DFB_LIBS_DIR) $(DFB_LIBS) $(DFB_EXE_RELEASE)
	$(CP) $(DFB_TARGET_EXE) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(EPROSIMA_TARGET)

vpath %.cpp $(DFB_SOURCES_DIRS)

$(DFB_OUTDIR_RELEASE)/%.o:%.cpp
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) $(DFB_CFLAGS) -MM $(DFB_INCLUDE_DIRS) $< | sed "s/^.*:/$(DFB_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	$(CPP) $(DFB_CFLAGS) $(DFB_INCLUDE_DIRS) $< -o $@

