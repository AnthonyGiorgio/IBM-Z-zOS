# Makefile for 'sparse' utility
#
#  Designed for use on IBM Unix System Services.
#
# 'make' or 'make all' to compile, 'make clean' to remove all .o's and binary
#
# by default this will build in the same directory the files are in, you will
# have to modify it if you wish to do otherwise

OBJS   = sparse.o
TARGET = sparse

# --------------------------------------------------

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(LDFLAGS) $(OBJS)

sparse.o: sparse.c
	$(CC) -c $(CFLAGS) $^

clean:
	rm -f *.o $(TARGET)
