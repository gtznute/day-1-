##
## EPITECH PROJECT, 2020
## makefile BSQ
## File description:
## 
##

SRC =	my_hunter.c		\
	movement.c			\
	event.c				\
	init_destroy.c		\
	main.c				\
	display.c			\

NAME =	my_hunter

OBJ =	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-system -l csfml-audio

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re: fclean	all