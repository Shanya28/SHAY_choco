##
## EPITECH PROJECT, 2024
## make
## File description:
## file
##
SRC	=	*.c

NAME	=	shay


FLAGS	=	--coverage

OTHER	=	-lcriterion

all:
	gcc $(SRC) -o $(NAME)

clean:
	rm -f *#
	rm -f *~
	rm -f *gcno
	rm -f *gcda

tests_run:
	gcc -o unit_tests my_strlen.c tests/test_my_strlen.c $(FLAGS) $(OTHER)

fclean:
	rm -f $(NAME)
	rm -f *#
	rm -f *~
	rm -f unit_tests

re:	fclean all
