CC = g++
SRCS = src/boilerplate.cpp
PROG = boilerplate

LIBS = `pkg-config opencv4 --libs`
CFLAGS = `pkg-config opencv4 --cflags`

all:
	$(CC) $(CFLAGS) $(SRCS) $(LIBS) -o build/$(PROG)

run:
	cd build && ./$(PROG)
