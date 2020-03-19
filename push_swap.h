/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 17:05:02 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/08 10:36:46 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	s(int *a, int len);
void	p(int *a, int *alen, int *b, int *blen);
void	r(int *a, int i);
void	rr(int *a, int i);
void	place(int n, int *arr, int len);
int	rev(int n, int *arr, int len);
int	rot(int n, int *arr, int len);
int	md(int *arr, int len);
int	mx(int *arr, int len);
int	mn(int *arr, int len);
int	sort(int *arr, int len);
int	target(int n, int *arr, int len);
int	*convert(char **str, int len);
int	wordcount(char **str);

#endif
