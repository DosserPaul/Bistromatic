##
## EPITECH PROJECT, 2020
## makefile header
## File description:
## makefile
##
NAME = calc

SRC = eval_expr.c

LIBS = -L lib/ -lmy -L lib/ -lcalculs

all: $(NAME)

$(NAME):
	$(MAKE) -C lib/my
	$(MAKE) -C lib/calcul/
	gcc -o $(NAME) main.c $(SRC) $(LIBS)

fclean:
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

test:
	$(MAKE) -C lib/my/
	$(MAKE) -C lib/calcul/
	gcc -o unit_tests bonus/tests/tests.c $(SRC) -lcriterion $(LIBS) -g

mr_clean:
	find -name "*~" -delete
	find -name "#*#" -delete
	find -name "*.o" -delete
