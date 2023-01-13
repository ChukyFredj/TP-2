##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make file.
##

SRC	=	./main.c \
		./src/ex1.c \
		./src/ex2.c \
		./src/ex3.c \
		./src/ex4.c

OBJ	=	$(notdir $(SRC:.c=.o))

NAME	=	tp2

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ) -lm

clean:
	rm -f *.o
	rm -f *# *~ ./*/*# ./*/*~ ./*/*/*# ./*/*/*~ vgcore*

fclean:	clean
	rm -f $(NAME)

re:	fclean all

valgrind:	clean
	gcc -g3 -o $(NAME) $(SRC)

update:
	mmakefile tp2 -c

prepush: fclean
	git add .
	git status

full: update
	make re

pull:
	git pull origin master

tree: prepush
	tree -a -I .git

debug: clean
	gcc -g3 -o $(NAME) $(SRC) -Wall -Wextra -pedantic

push: prepush
	git commit -m "push auto"
	git push origin master
