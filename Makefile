CC=g++
CFLAGS=-Wall -c
BUILDFLAGS=
LDFLAGS=
DIRBUILD=build
DIRSRC=src
SOURCES=$(shell ls $(DIRSRC)/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLES=$(DIRBUILD)/main

all: BUILDFLAGS=-DBUILD_MAIN 
all: $(SOURCES) $(DIRBUILD)/main

$(EXECUTABLES): $(OBJECTS)
	mkdir -p $(DIRBUILD)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(BUILDFLAGS) $(CFLAGS) $< -o $@

clean:
	rm $(OBJECTS) $(EXECUTABLE)

.PHONY: clean all $(DIRSRC)/main.cpp
