ifeq ($(OS),Windows_NT)
    # Windows specific flags
    CC = gcc
    RM = del /q
    EXECUTABLE = cardinal-chains.exe
else ifeq ($(OSTYPE),darwin)
    # Mac OS specific flags
    CC = clang
    RM = rm -f
    EXECUTABLE = cardinal-chains
else
    # Linux specific flags
    CC = gcc
    RM = rm -f
    EXECUTABLE = cardinal-chains
endif

CFLAGS = -Wall -Wextra -pedantic -std=c17

DEPS = $(wildcard levels/*.h) $(wildcard include/*.h)
OBJ = src/main.o src/game.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	$(RM) $(OBJ) $(EXECUTABLE)

