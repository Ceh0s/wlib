##
## EPITECH PROJECT, 2025
## makefile
## File description:
## day 10
##

LIB	=	adv_sort_warray.c
LIB	+=	arr_dup.c
LIB	+=	arr_len.c
LIB	+=	my_astrcat.c
LIB	+=	char_is_auth.c
LIB	+=	count_occ.c
LIB	+=	is_freeable.c
LIB	+=	load_file.c
LIB	+=	my_getnbr.c
LIB	+=	my_puterr.c
LIB	+=	my_putnbr.c
LIB	+=	my_putnstr.c
LIB	+=	my_putstr.c
LIB	+=	my_strcat.c
LIB	+=	my_strchr.c
LIB	+=	my_strcmp.c
LIB	+=	my_strcpy.c
LIB	+=	my_strdup.c
LIB	+=	my_strlen.c
LIB	+=	my_strncat.c
LIB	+=	my_strncmp.c
LIB	+=	my_strncpy.c
LIB	+=	my_strndup.c
LIB	+=	my_strnlen.c
LIB	+=	num_len.c
LIB	+=	show_warray.c
LIB	+=	str_is_auth.c
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
