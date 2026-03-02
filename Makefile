##
## EPITECH PROJECT, 2025
## makefile
## File description:
## day 10
##

SRC	=	adv_sort_warray.c\
		arrdup.c	\
		arrlen.c	\
		astrcat.c	\
		charisauth.c	\
		isfreeable.c	\
		load_file.c	\
		my_getnbr.c	\
		myputerr.c	\
		myputnbr.c	\
		myputnstr.c	\
		myputstr.c	\
		mystrcat.c	\
		mystrchr.c	\
		mystrcmp.c	\
		mystrcpy.c	\
		mystrdup.c	\
		mystrlen.c	\
		mystrncat.c	\
		mystrncmp.c	\
		mystrncpy.c	\
		mystrndup.c	\
		mystrnlen.c	\
		numlen.c	\
		show_warray.c	\
		strisauth.c	\
		stwa_delimiter.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

debug:  CC = epiclang
debug:  re

$(NAME):	$(OBJ)
	@ar rc libmy.a $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
