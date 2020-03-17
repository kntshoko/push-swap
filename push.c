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


static int	mdb(int *arr, int len)
{
	int *a;
	int temp;
	int i;
	int j;

	a = malloc(len * sizeof(int));
	ft_memcpy(a,arr,len*sizeof(int));
	i = -1;
	while(++i < len)
	{
		j = -1;
		while(++j < len)
		{
			if (a[i] >  a[j] )
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	temp = a[len /2];
	free(a);
	return (temp);
}

int mid(int m, int *a, int alen)
{
	int i;

	i = 0;
	while (i < alen)
	{
		if (a[i] < m)
			return (0);
		i++;
	}
	return (1);
}

int midb(int m, int *b, int blen)
{
	int i;

	 i = 0;
	while (i < blen)
	{
		if (b[i] > m)
			return (0);
		i++;
	}
	return (1);
}

void backtoa(int *a, int *alen, int *b, int *blen)
{
	while(*blen > 0)
	{
		place(mx(b,*blen),b,*blen);
		ft_putendl("pa");
        	p(b,blen,a,alen);
	}
}

void tob(int *a, int *alen, int *b, int *blen)
{
	int i;

	while(sort(a,*alen) != 1 )
	{
		i = md(a,*alen);
		while(sort(a,*alen) != 1 && mid(i,a,*alen) != 1)
		{
			if (a[0] > a[1])
			{
				ft_putendl("sa");
				s(a,*alen);
			}
			else if (a[0] < i)
			{
				ft_putendl("pb");
                		p(a,alen,b,blen);
			}
			else
			{
				ft_putendl("rra");
				rr(a,*alen);
			}
		}
	}
}

int		sortb(int *arr, int len)
{
	int i;

	i = 1;
	while (i < len)
	{
		if (arr[i - 1] < arr[i])
			return (0);
		i++;
	}
	return (1);
}

void toa(int *a, int *alen, int *b, int *blen)
{
	int i;

	while(sortb(b,*blen) != 1 )
	{
		i = mdb(b,*blen);
		while(sortb(b,*blen) != 1 && midb(i,b,*blen) != 1)
		{
			if (b[0] < b[1])
			{
				ft_putendl("sb");
				s(b,*blen);
			}
			else if (b[0] > i)
			{
				ft_putendl("pa");
                		p(b,blen,a,alen);
			}
			else
			{
				ft_putendl("rrb");
				rr(b,*blen);
			}
		}
	}
}


void	sortless(int *a,int alen)
{
	int b[alen];
	int blen;

	blen = 0;
	tob(a,&alen,b,&blen);
	backtoa(a,&alen,b,&blen);
	while(blen > 0)
	{
		place(mx(b,blen),b,blen);
		ft_putendl("pa");
        	p(b,&blen,a,&alen);
	}
}

void	sortmore(int *a,int alen)
{
	int b[alen];
	int blen = 0;
	
	tob(a,&alen,b,&blen);
	toa(a,&alen,b,&blen);
	backtoa(a,&alen,b,&blen);
	tob(a,&alen,b,&blen);
	while(blen > 0)
	{
		place(mx(b,blen),b,blen);
		ft_putendl("pa");
        	p(b,&blen,a,&alen);
	}
}

int okk(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{	
		if((str[i] == ' ' || ft_isdigit(str[i]) == 1) && str[i] != '\0')
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
	if ( c > 1 && okk(v[1]) == 1)
	{
		
		alen =  wordcount(ft_strsplit(v[1], ' '));
		a = convert(ft_strsplit(v[1], ' '), alen);
		sortmore(a,alen);
	}
	free(a);
	return (0);
}
