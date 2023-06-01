##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for *project name*
##

NAME = fridge

SRC = src/main.c \
	  src/commands/handler.c \
	  src/commands/getter.c \
	  src/commands/builtins/maker.c \
	  src/commands/builtins/display.c \
	  src/commands/builtins/add.c \
	  src/errors/handler.c \
	  src/errors/errors.c \
	  src/utils/init.c \
	  src/utils/file.c \
	src/utils/free.c \
	src/utils/my_strwords.c \

OBJ = $(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra -g3

LIBFLAGS = -L./lib -lmy

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib
	gcc $(OBJ) -o $(NAME) $(CFLAGS) $(LIBFLAGS)

%.o: %.c
	gcc -c $(CFLAGS) $< -o $@

clean:
	make clean -C lib
	rm -f $(OBJ)

fclean: clean
	make fclean -C lib
	rm -f $(NAME_LIB)
	rm -f $(NAME)
	rm -f .save

re: fclean all

.PHONY: all clean fclean re
