CC=gcc
CFLAGS=-Wall -std=c99
PROGRAM=data_types
CFILES=data_types.c
OFILES=data_types.o


pointers: $(OFILES)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OFILES)

pointers.o: $(CFILES)
	$(CC) $(CFLAGS) -c $(CFILES)

clean:
	rm -f $(OFILES)

clean_program:
	rm -f $(OFILES) $(PROGRAM)