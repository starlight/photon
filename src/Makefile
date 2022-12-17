VPATH=core
BIN=photon
UNITS=photon.scm context.o stream.o parse.o
CSC=csc -r5rs-syntax

# 'uses' function
uses=$(foreach unit,$(wordlist 2,999,$(patsubst %.o,%,$(1))),-uses $(unit))

# build executable
$(BIN): $(UNITS)
	@echo "Building '$@'"
	$(CSC) $(call uses,$^) -o $@ $^

# build units
parse.o: stream.o
%.o: %.scm
	@echo "Building '$@'"
	$(CSC) -cJ -unit $* $(call uses,$^) -o $@ $<

# remove build files
.PHONY: clean
clean:
	@echo "Removing build files"
	rm -fv *.import.scm *.link *.c *.o *.core
