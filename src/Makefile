NAME=photon
CSC=csc
VPATH=core
MAIN=photon.scm
UNITS=input.o parse.o
#CSC_OPTIONS=-static

# build main image
$(NAME): $(MAIN) $(UNITS)
	@echo "Building '$@'"
	$(CSC) -o $@ $(foreach unit,\
		$(wordlist 2,99,\
		$(patsubst %.o,%,$^)),-uses $(unit)) -r5rs-syntax $^

parse.o: input.o

# build units
%.o: %.scm
	@echo "Building '$@'"
	$(CSC) -o $@ -unit $* -cJ -r5rs-syntax $<

.PHONY: clean
clean:
	@echo "Removing build files"
	rm -fv *.c *.import.scm *.link *.o *.core
