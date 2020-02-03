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

	while(blen > 0)
	{
		place(mx(b,blen),b,blen);
		ft_putstr("pa ");
        p(b,&blen,a,&alen);
	}

	i = 0;
	printf("\na\n");
	while (i < alen)
	{
		printf("%d ",a[i]);
		i++;
	}
	printf("\nb\n");
	i = 0;
	while (i < blen)
	{
		printf("%d ",b[i]);
		i++;
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
	free(str);
	return(i);
}

int *convert(char **str, int len)
{
	int i;
	int *a;

	a = (int *)malloc(sizeof(int)*(len));
	i = 0;
	while(str[i] != NULL)
	{
		a[i] = ft_atoi(str[i]);
		i++;
	}
	free(str);
	return (a);
}


int main(int c, char **v)
{
	int *a;
	int alen ;

	a = NULL;
	if ( c > 1 && ok(v[1]) == 1)
	{
		
		alen =  wordcount(ft_strsplit(v[1], ' '));
		a = convert(ft_strsplit(v[1], ' '), alen);
		if (alen <= 100)
			sortless(a,alen);
	}	
	free(a);
	return (0);
}