##
## EPITECH PROJECT, 2020
## Make file calcul
## File description:
## calcul
##

NAME = libcalculs.a

SRC =	verifs_important.c	\
		calculs.c	\
		summands.c	\
		number.c	\
		calculnb.c	\
		my_infin_add.c	\
		sub_infin.c	\
		multi_infin.c	\
		infint_equality.c	\
		shorter_array.c	\
		transform.c	\
		my_strcmp.c	\
		calcul_infin_add.c

OBJ = $(SRC:.c=.o)

HEADER = mycalculs.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libcalculs.a $(OBJ)
	cp $(NAME) ../
	cp $(HEADER) ../../include/
	cp summands_tool.h ../../include/
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm ../../include/$(HEADER)
	rm ../../include/summands_tool.h

clean:
	rm -f $(OBJ)

re:	fclean all
