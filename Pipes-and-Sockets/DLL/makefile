PRG_SUFFIX_FLAG := 0
PRG_SUFFIX := .dll

CC := gcc
EXP := LIBSPEC_EXPORTS
LDFLAGS := -s -shared -Wl,--subsystem,windows
CFLAGS_INC :=
CFLAGS := -D $(EXP)

SRCS := $(wildcard *.c)
PRGS := $(patsubst %.c,%, $(SRCS))
DLLS := $(patsubst %,%$(PRG_SUFFIX),$(PRGS))
## OBJS are automagically compiled by make
OBJS := $(patsubst %,%.o,$(PRGS))

all: $(DLLS)

.SECONDEXPANSION:
OBJ := $(patsubst %$(PRG_SUFFIX),%.o,$@)
ifeq ($(PRG_SUFFIX_FLAG),1)
	DLL := $(patsubst %$(PRG_SUFFIX),%,$@)
else
	DLL := $@
endif

%$(PRG_SUFFIX): $(OBJS)
	$(CC) -o $(DLL) $(OBJ) $(LDFLAGS)

