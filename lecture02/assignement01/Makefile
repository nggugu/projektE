# zajednicki izvorni kodovi i objekti
SRC=$(wildcard ./src/*.c)
OBJ=$(patsubst %.c,%.o,$(SRC))

EXESRC=$(wildcard exesrc/*.c)
EXEOBJ=$(patsubst %.c,%.o,$(EXESRC))
EXE_TEMP=$(patsubst %.c,%.elf,$(EXESRC))
EXE=$(subst exesrc,exe,$(EXE_TEMP))

DEPS=$(wildcard inc/*.h)

CFLAGS=-I inc/
LDFLAGS=-lm
CC=gcc

.SECONDARY:

all: $(EXE)

# Problem opet isti: kada se promijeni bilo koja datoteka, make ce buildati svaki .elf
%.elf: $(EXEOBJ) $(OBJ)
	$(CC) $(patsubst exe/%.elf,exesrc/%.o,$@) $(OBJ) -o $@ $(LDFLAGS)

# Problem sa pristupom gde imamo foreach petlju: kada se promijeni bilo koja datoteka, make ce buildati svaki .elf
#$(EXE): $(EXEOBJ) $(OBJ)
#	$(CC) -o $@ $^ $(LDFLAGS)
#	$(foreach f,$(EXEOBJ), gcc $(f) $(OBJ) -o $(subst .o,.elf,$(subst exesrc/,exe/,$(f))) -lm;)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(EXE) $(EXEOBJ)

print:
	@echo $(EXE)
	@echo $(SRC) 
	@echo $(EXESRC)
	@echo $(OBJ)
	@echo $(EXEOBJ)
