##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	bsq.c				\
		char_array.c		\
		message_error.c		\
		open_and_read.c		\
		display.c			\


OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	=	-I./include -g3

all: $(NAME)

make_lib:
	make -C lib/my

$(NAME): make_lib $(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy $(CFLAGS)

clean:
	rm -f $(OBJ)
	make clean -C lib/my

fclean: clean
	rm -f $(NAME)
	rm -rf include
	make fclean -C lib/my

re: fclean all
