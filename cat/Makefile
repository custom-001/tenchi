include config.mk

# change the name of the executable on config.mk (EX)
all: $(EX)

# compile the executable
# change the flag options in config.mk (LF)
$(EX): $(LS)
	$(CC) $^ -o $@ $(LF)

# compile the object files
# add extra C files on config.mk (CS)
# change the flag options in config.mk (CF)
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
