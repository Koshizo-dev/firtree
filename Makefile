##
## EPITECH PROJECT, 2020
## firtree
## File description:
## Generator Makefile
##

CC		= gcc

SRC		= $(wildcard src/*.c)

OBJ 	= $(SRC:.c=.o)

BIN		= tree

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) -o $@ $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(BIN)

re: fclean all