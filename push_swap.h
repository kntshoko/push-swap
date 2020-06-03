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
void	p_sort(int *a, int *alen, int *b, int *blen);
int	sort_a(int *arr, int len);
int	median_a(int *arr, int len);
void	place(int n, int *arr, int len);
void	place_a(int i, int *arr, int len);
int	rev(int n, int *arr, int len);
int	rot(int n, int *arr, int len);
int	max(int *arr, int len);
int	min(int *arr, int len);
void	sortting(int *a, int alen);
int	wordcount(char **s);
int	*convert(char **str, int len);
char	**ok(char **s);
int	mid_a(int i, int *a, int len);
int	ft_cmp(const char *s1, const char *s2);
char	*ft_joint(char *s1, char *s2, char *s3);
int	wordcount(char **str);
char    **ok(char **str);
void	delarr(char **str);
int	do_check(char **mv, int *a, int alen);
int	check_moves(char **mv);
char	*get_mv(int fd);
void	sort_three(int *a, int alen);
void	sort_five(int *a, int alen);
int     to_r(int i, int *arr, int len);
int     to_rr(int i, int *arr, int len);

#endif
