##
## EPITECH PROJECT, 2025
## makefile
## File description:
## day 10
##

LIB	+=	adv_sort_warray.c
LIB	+=	arrdup.c
LIB	+=	arrlen.c
LIB	+=	astrcat.c
LIB	+=	charisauth.c
LIB	+=	countocc.c
LIB	+=	isfreeable.c
LIB	+=	load_file.c
LIB	+=	my_getnbr.c
LIB	+=	myputerr.c
LIB	+=	myputnbr.c
LIB	+=	myputnstr.c
LIB	+=	myputstr.c
LIB	+=	mystrcat.c
LIB	+=	mystrchr.c
LIB	+=	mystrcmp.c
LIB	+=	mystrcpy.c
LIB	+=	mystrdup.c
LIB	+=	mystrlen.c
LIB	+=	mystrncat.c
LIB	+=	mystrncmp.c
LIB	+=	mystrncpy.c
LIB	+=	mystrndup.c
LIB	+=	mystrnlen.c
LIB	+=	numlen.c
LIB	+=	show_warray.c
LIB	+=	strisauth.c
LIB	+=	stwa_delimiter.c

OBJ	=	$(LIB:.c=.o)

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
