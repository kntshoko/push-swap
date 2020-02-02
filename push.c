/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 16:44:55 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/15 12:44:22 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int mid(int m, int *a, int alen)
{
	int i = 0;
	while (i < alen)
	{
		if (a[i] < m)
			return (0);
		i++;
	}
	return (1);
}

void	less()
{
	int i;

	while(sort(a,alen) != 1 )
	{
		i = md(a,alen);
		while(sort(a,alen) != 1 && mid(i,a,alen) != 1)
		{
			if (a[0] > a[1])
			{
				ft_putstr("sa ");
				s(a,alen);
			}
			else if (a[0] < i)
			{
				ft_putstr("pb ");
                p(a,&alen,b,&blen);
			}
			else
			{
				ft_putstr("rra ");
				rr(a,alen);
			}
		}
	}
}

int ok(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if('-' != str[i] || ' ' != str[i] || (str[i] >= 48 && str[i] <= 57))
			return(0);
		i++;
	}
	return 1;
}

int main(int c, int **v)
{
	int *a;
	int alen;
	if ( c > 1 && ok(v[1]) == 1)
	{
		make(a,&alen,v);
		if (alen <= 100)
			sortless(a,alen);
		else
			sortmore(a,alen);
	}	
	return (0);
}
