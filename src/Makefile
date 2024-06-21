CC:=cc
CFLAGS:=-Wall -pedantic
TARGET:=networklib
LINUX:=./linux/
WINDOW:=./window/
SRC:=$(wildcard *.c)
SRCINSIDELINUX:=$(wildcard $(LINUX)*.c)
OBJ:=$(SRC:.c=.o)
OBJ+=$(SRCINSIDELINUX:.c=.o)

$(TARGET) : $(OBJ)
	$(CC) $(FLAGS) $^ -o $@

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm $(OBJ) networklib
