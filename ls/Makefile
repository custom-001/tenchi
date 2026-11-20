include config.mk

# change executable name on config.mk (EX)
all: $(EX)

# compile the executable
# change flag options on config.mk (LF)
$(EX): $(LS)
	$(CC) $^ -o $@ $(LF)

# compile the object files
# add extra C files on config.mk (CS)
%.o: %.c
	$(CC) -c $< -o $@ $(CF)

# cleaning up (yes)
clean:
	-rm -f $(EX) $(LS)

# install it to system
# change install directory on config.mk (ID)
install:
	make
	cp $(EX) $(ID)

# honestly I have no idea why I add this at all
.PHONY: clean install
