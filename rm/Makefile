include config.mk

# change the executable name in config.mk (EX)
all: $(EX)

# compile the executable
# change flag options in config.mk (LF)
$(EX): $(LS)
	$(CC) $^ -o $@ $(LF)

# compile the object files
# add extra C files in config.mk (CS)
# change flag options in config.mk (CF)
%.o: %.c
	$(CC) -c $< -o $@ $(CF)

# cleaning up
clean:
	-rm -f $(EX) $(LS)

# install it to the system
# change install directory in config.mk (ID)
install:
	make
	cp $(EX) $(ID)

.PHONY: clean install
