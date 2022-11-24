NAME=photon
CSC=csc
VPATH=core
MAIN=photon.scm
UNITS=parse.o

.PHONY: build clean

# build main image
$(NAME): $(MAIN) $(UNITS)
	@echo "Building '$@'"
	$(CSC) -o $@ -k -static $(foreach unit,\
		$(wordlist 2,99,\
		$(patsubst %.o,%,$^)),-uses $(unit)) $<

# build units
%.o: %.scm
	@echo "Building '$@'"
	$(CSC) -o $@ -unit $* -ckJ -static $<

clean:
	@echo "Removing build files"
	rm -fv *.import.scm *.link *.o
