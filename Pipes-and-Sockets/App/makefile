PRG_SUFFIX_FLAG := 0
PRG_SUFFIX := .exe

CC := gcc
LDFLAGS :=
CFLAGS_INC :=
CFLAGS :=

SRCS := $(wildcard *.c)
PRGS := $(patsubst %.c,%,$(SRCS))
DLLS := $(wildcard ../DLL/*.dll)

BINS := $(patsubst %,%$(PRG_SUFFIX),$(PRGS))
## OBJS are automagically compiled by make
OBJS := $(patsubst %,%.o,$(PRGS))

all: $(BINS)

.SECONDEXPANSION:
OBJ := $(patsubst %$(PRG_SUFFIX),%.o,$@)
DLL_RAW := $(addprefix -l, $(DLLS))
DLL := $(patsubst %.dll,%,$(DLL_RAW))

ifeq ($(PRG_SUFFIX_FLAG),0)
BIN := $(patsubst %$(PRG_SUFFIX),%,$@)
else
BIN := $@
endif

%$(PRG_SUFFIX): $(OBJS)
	$(CC) -o $(BIN) -s $(OBJ) -L. $(DLL)