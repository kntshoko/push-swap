# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/05 16:35:17 by kntshoko          #+#    #+#              #
#    Updated: 2020/01/05 17:02:24 by kntshoko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
NAME2 = checker.a
EXE = push_swap
EXE2 = checker
MAIN = push.c
MAIN2 = check.c
LIB = libft/libft.a 
CC = gcc
FLAG = -Wall -Werror -Wextra
ARC = ar rc
SRC =	math.c\
		moves.c\
		place.c\

OBJ =	math.o\
		moves.o\
		place.o\

# all: $(NAME)

$(NAME):
		$(CC) $(FLAG) -c $(SRC)
		$(ARC) $(NAME) $(OBJ)
		ranlib $(NAME)
		$(CC) $(FLAG) -o $(EXE) $(MAIN) $(LIB) $(NAME) 
		# ranlib $(NAME)
		# $(CC) $(FLAG) -o $(EXE2) $(MAIN2) $(LIB) $(NAME2) 

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME) $(EXE)

re: fclean all
