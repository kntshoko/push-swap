/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 17:05:02 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/06 13:15:12 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

int     mx(int *arr, int len);
int     mn(int *arr, int len);
int     sort(int *arr, int len);
int    target(int n, int *arr, int len);
void    s(int *a, int len);
void    p(int *a, int *alen, int *b, int *blen);
void    r(int *a, int i);
void    rr(int *a, int i);
int     rev(int n, int *arr, int len);
int     rot(int n, int *arr, int len);
void    place(int n, int *arr, int len);

#endif
