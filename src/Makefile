NAME=photon
CSC=csc
VPATH=core
MAIN=photon.scm
UNITS=input.o parse.o
#SFLAGS=-static

# build main image
$(NAME): $(MAIN) $(UNITS)
	@echo "Building '$@'"
	$(CSC) -o $@ $(UNITS) -k $(SFLAGS) $(foreach unit,\
		$(wordlist 2,99,\
		$(patsubst %.o,%,$^)),-uses $(unit)) $<

parse.o: input.o

# build units
%.o: %.scm
	@echo "Building '$@'"
	$(CSC) -o $@ -unit $* -ckJ -static $<

.PHONY: clean
clean:
	@echo "Removing build files"
	rm -fv *.import.scm *.link *.o *.core
