/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 11:11:47 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/08 11:37:43 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		mx(int *arr, int len)
{
	int t;
	int i;

	i = 0;
	t = arr[0];
	while (++i < len)
	{
		if (arr[i] > t)
			t = arr[i];
	}
	return (t);
}

int		mn(int *arr, int len)
{
	int t;
	int i;

	i = 0;
	t = arr[0];
	while (++i < len)
	{
		if (arr[i] < t)
			t = arr[i];
	}
	return (t);
}

int		sort(int *arr, int len)
{
	int i;

	i = 1;
	while (i < len)
	{
		if (arr[i - 1] > arr[i])
			return (0);
		i++;
	}
	return (1);
}


int	target(int n, int *arr, int len)
{
	int m;
	int i;

	m = mn(arr,len);
	i = 0;
	while (i < len)
	{
		if (arr[i] >  m && n > arr[i])
			m = arr[i];
		i++;
	}
	return (m);
}

int	md(int *arr, int len)
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
			if (a[i] <  a[j] )
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
