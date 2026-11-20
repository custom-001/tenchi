include config.mk

# change executable name on config.mk (EX)
all: $(EX)

# compile the executable
# change flag options on config.mk (LF)
$(EX): $(LS)
	$(CC) $^ -o $@ $(LF)

# compile the object files
# add extra C files on config.mk (CS)
# change flag options on config.mk (CF)
%.o: %.c
	$(CC) -c $< -o $@ $(CF)

# cleaning up
clean:
	-rm -f $(EX) $(LS)

# install it to the system
# change install directory on config.mk (ID)
install:
	make
	cp $(EX) $(ID)

# still don't know why I added this
.PHONY: clean install
