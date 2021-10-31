# Zajednicki izvorni i objektni kodovi
SRC=$(wildcard ./src/*.c)
OBJ=$(patsubst %.c,%.o,$(SRC))

# Izvorni i objektni kodovi specificni za jedan program
EXESRC=$(wildcard exesrc/*.c)
EXEOBJ=$(patsubst %.c,%.o,$(EXESRC))
EXE=$(patsubst exesrc/%.c,%.elf,$(EXESRC))

# Postavke kompajlera
CC=gcc
CFLAGS=-I inc/
LDFLAGS=-lm

.SECONDARY:

all: $(EXE)

%.elf: exesrc/%.o $(OBJ)
	$(CC) $^ -o exe/$@ $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(EXE) $(EXEOBJ)
