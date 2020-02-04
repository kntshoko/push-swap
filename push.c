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


int	mdb(int *arr, int len)
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
	int i = 0;
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
	int i = 0;
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
		ft_putstr("pa ");
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
				ft_putstr("sa ");
				s(a,*alen);
			}
			else if (a[0] < i)
			{
				ft_putstr("pb ");
                p(a,alen,b,blen);
			}
			else
			{
				ft_putstr("rra ");
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
				ft_putstr("sb ");
				s(b,*blen);
			}
			else if (b[0] > i)
			{
				ft_putstr("pb ");
                p(b,blen,a,alen);
			}
			else
			{
				ft_putstr("rrb ");
				rr(b,*blen);
			}
		}
	}
}


void	sortless(int *a,int alen)
{
	int i;
	int b[alen];
	int blen = 0;
	
	tob(a,&alen,b,&blen);
	backtoa(a,&alen,b,&blen);
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

void	sortmore(int *a,int alen)
{
	int i;
	int b[alen];
	int blen = 0;
	
	tob(a,&alen,b,&blen);
	toa(a,&alen,b,&blen);
	backtoa(a,&alen,b,&blen);
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
		else
			sortmore(a,alen);
	}	
	free(a);
	return (0);
}