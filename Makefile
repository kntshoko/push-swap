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
SRC =	check_moves.c\
	convert.c\
	delarr.c\
	do_check.c\
	get_mv.c\
	max_min.c\
	median_a.c\
	mid_a.c\
	moves.c\
	ok.c\
	place.c\
	p_sort.c\
	sort_a.c\
	sort_five.c\
	sort_three.c\
	sortting.c\
	tools.c\
	to_push_a.c\
	word_count.c\
	

OBJ =	check_moves.o\
	convert.o\
	delarr.o\
	do_check.o\
	get_mv.o\
	max_min.o\
	median_a.o\
	mid_a.o\
	moves.o\
	ok.o\
	place.o\
	p_sort.o\
	sort_a.o\
	sort_five.o\
	sort_three.o\
	sortting.o\
	tools.o\
	to_push_a.o\
	word_count.o\

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
