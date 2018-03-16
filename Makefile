CC=gcc
CFLAGS=-I$(IDIR)

EDITOR=nano

IDIR=src
ODIR=obj

#_DEPS=test.h
#DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

EDITFILE=primes
FILES=test memory_list print primes
FMAIN=main
_FNAMES=$(FILES) $(FMAIN)
OBJ=$(patsubst %,$(ODIR)/%.o,$(_FNAMES))

prog: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

$(ODIR)/%.o: $(IDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


clean:
	rm $(ODIR)/*.o prog

dir:
	ls -R

file:
	$(EDITOR) Makefile

remake:
	make clean
	make prog
	ls -R

main:
	$(EDITOR) ./src/$(FMAIN).c

run:
	./prog 30

edit:
	$(EDITOR) ./src/$(EDITFILE).c


