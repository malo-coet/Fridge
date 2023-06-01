##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makfile for the lib
##

SRC = my/my_str_to_word_array.c

OBJ = $(SRC:.c=.o)

NAME_LIB = libmy.a

all: $(NAME_LIB)

$(NAME_LIB): $(OBJ)
	ar rc $(NAME_LIB) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME_LIB)

re: fclean all

.PHONY: all clean fclean re
