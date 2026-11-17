##
## EPITECH PROJECT, 2026
## makefile
## File description:
## wlib
##

SRC	=	adv_sort_warray.c
SRC	+=	arr_dup.c
SRC	+=	arr_len.c
SRC	+=	my_astrcat.c
SRC	+=	char_is_auth.c
SRC	+=	count_occ.c
SRC	+=	is_freeable.c
SRC	+=	load_file.c
SRC	+=	my_getnbr.c
SRC	+=	my_putnbr.c
SRC	+=	my_putnstr.c
SRC	+=	my_putstr.c
SRC	+=	my_strcat.c
SRC	+=	my_strchr.c
SRC	+=	my_strcmp.c
SRC	+=	my_strcpy.c
SRC	+=	my_strdup.c
SRC	+=	my_strlen.c
SRC	+=	my_strncat.c
SRC	+=	my_strncmp.c
SRC	+=	my_strncpy.c
SRC	+=	my_strndup.c
SRC	+=	my_strnlen.c
SRC	+=	num_len.c
SRC	+=	password_generator.c
SRC	+=	show_warray.c
SRC	+=	str_is_auth.c
SRC	+=	stwa_delimiter.c

TEST	=	test/main.c

OBJ	=	$(SRC:.c=.o)
TEST_OBJ =	$(TEST:.c=.o)

NAME	=	libmy.a
TEST_NAME =	xxsaucisson

CFLAGS	=	-I./include

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)

tests:	$(OBJ) $(TEST_OBJ)
	@$(CC) $(CFLAGS) -o $(TEST_NAME) $(OBJ) $(TEST_OBJ)

clean:
	@rm -f $(OBJ) $(TEST_OBJ)

fclean: clean
	@rm -f $(NAME) $(TEST_NAME)

debug:	CC = epiclang
debug:	CFLAGS += -g
debug:	fclean tests

re: 	fclean all
