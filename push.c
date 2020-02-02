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

void	sortless(int *a,int alen)
{
	int i;
	int b[alen];
	int blen = 0;
	
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
	while(str[i])
	{	
		if((str[i] == '-' || str[i] == ' ' || ft_isdigit(str[i]) == 1) && str[i] != '\0')
			i++;
		else
			return(0);
	}
	return 1;
}

int wordcount(char **str)
{
	int i = 0;

	while(str[i] != NULL)
		i++;	
	return(i);
}

void convert(int *a, char **str)
{
	int i;

	i = 0;
	while(str[i] != NULL)
	{
		a[i] = ft_atoi(str[i]);
		i++;
	}
}

int	make(int *a, char *str)
{
	
	char **split;

	split = ft_strsplit(str, ' ');
	i = wordcount(split);
	
	
	a = (int *)malloc(sizeof(int)*(i - 1));
	a = convert(split);
	free(split);
	return(i);
}

int main(int c, char **v)
{
	int *a;
	int alen = 0;

	a = NULL;

	

	if ( c > 1 && ok(v[1]) == 1)
	{
		
		int i = make(a,v[1]);
		printf("\n numbers == %d", a[i]);
		if (alen <= 100)
			sortless(a,alen);
		//else
		//	sortmore(a,alen);
	}	
	return (0);
}