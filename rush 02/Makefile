SRCS 	=	main.c	parse.c	match.c	fnc.h cpy.c diarr.c
SRC	=	*.c
CC 	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	rush-02
OBJS	=	${SRCS:.c=.o=.h=}

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)
clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)