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
MAIN = main_push.c
MAIN2 = main_checker.c
CC = gcc
FLAG = -Wall -Werror -Wextra
ARC = ar rc
SRC =	moves.c\
	place.c\
	push_to_b.c\
	target.c\
	back_to_a.c\
	ok.c\
	word_count.c\
	max_min.c\
	sort_a.c\
	convert.c\
	median_a.c\
	median_b.c\
	sort_b.c\
	push_to_a.c\
	sortting.c\
	tools.c

OBJ =	moves.o\
	place.o\
	push_to_b.o\
	target.o\
	back_to_a.o\
	ok.o\
	word_count.o\
	max_min.o\
	sort_a.o\
	convert.o\
	median_a.o\
	median_b.o\
	sort_b.o\
	push_to_a.o\
	sortting.o\
	tools.o

# all: $(NAME) $(NAME2)

$(NAME):
		cd libft &&  $(MAKE) re 
		$(CC) $(FLAG) -c $(SRC)
		$(ARC) $(NAME) $(OBJ)
		ranlib $(NAME)
		$(CC) $(FLAG) -o $(EXE) $(MAIN) libft/libft.a $(NAME)
		$(ARC) $(NAME2) $(OBJ) 
		ranlib $(NAME2)
		$(CC) $(FLAG) -o $(EXE2) $(MAIN2) libft/libft.a $(NAME2)

all: $(NAME)
	
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME) $(EXE)
		rm -f $(NAME2) $(EXE2)

re: fclean all
