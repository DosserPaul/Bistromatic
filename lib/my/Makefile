##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## No description
##

SRC	=	my_find_prime_sup.c	\
		my_is_digit.c	\
		my_is_prime.c	\
		my_revstr.c	\
		my_strcapitalize.c\
		my_str_islower.c	\
		my_strlowcase.c	\
		my_str_to_word_array.c	\
		my_getnbr_base.c	\
		my_putchar.c	\
		my_showmem.c	\
		my_strcat.c	\
		my_str_isnum.c	\
		my_strncat.c	\
		my_strupcase.c	\
		my_char_containumber.c	\
		my_getnbr.c	\
		my_put_float.c	\
		my_showstr.c	\
		my_strcmp.c	\
		my_str_isprintable.c	\
		my_strncmp.c	\
		my_swap.c	\
		my_compute_power_rec.c	\
		my_put_nbr.c	\
		my_show_word_array.c	\
		my_strcpy.c	\
		my_str_isupper.c	\
		my_strncpy.c	\
		my_compute_square_root.c	\
		my_isneg.c	\
		my_putstr.c	\
		my_sort_int_array.c	\
		my_str_isalpha.c	\
		my_strlen.c	\
		my_strstr.c	\
		nb_words_array.c	\
		length_double_array.c	\
		my_putnbr_base.c	\
		soustract_plus.c	\
		my_get_char_number.c	\
		char_to_int.c	\
		my_atoi.c

HEADER	=	my.h

OBJ	=	$(SRC:.c=.o)

LIB	=	libmy.a

NAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	@ar rc libmy.a $(OBJ)
	@rm -f $(OBJ)
	cp $(HEADER) ../../include/$(HEADER)
	cp $(LIB) ../$(LIB)

re:	fclean all

clean:
	@rm -f $(OBJ)

fclean:	
	rm -f $(NAME)

clearadd:
	rm $(LIB) ../$(LIB) ../../include/$(HEADER)

mr_clean:
	find -name "*~" -delete
	find -name "#*#" -delete
	find -name "*.o" -delete

