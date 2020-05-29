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
EXE = push_swap
EXE2 = checker
LIB = libft/libft.a
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
	tools.c\
	mid_b.c\
	mid_a.c\
	delarr.c\
	get_mv.c\
	check_moves.c\
	do_check.c

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
	tools.o\
	mid_a.o\
	mid_b.o\
	delarr.o\
	get_mv.o\
        check_moves.o\
        do_check.o


all: $(NAME)

$(NAME):
		cd libft &&  $(MAKE) re 
		$(CC) $(FLAG) -c $(SRC)
		$(ARC) $(NAME) $(OBJ)
		ranlib $(NAME)
		$(CC) $(FLAG) -o $(EXE) $(MAIN) $(NAME) $(LIB)
		$(CC) $(FLAG) -o $(EXE2) $(MAIN2) $(NAME) $(LIB)

all: $(NAME)
	
clean:
		rm -f $(OBJ)	
		cd libft &&  $(MAKE) clean 

fclean: clean
		rm -f $(NAME) $(EXE)
		rm -f $(NAME2) $(EXE2)
		cd libft &&  $(MAKE) fclean 
re: fclean all
