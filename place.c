/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 11:50:39 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/05 12:08:46 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rot(int n, int *arr, int len)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while(i < len && arr[i] != n)
	{
		i++;
		c++;
	}
	return (c);
}

int		rev(int n, int *arr, int len)
{
	int c;

	c = 0;
	while(--len && arr[len] != n)
		c++;
	return (c);
}


int		rot(int n, int *arr, int len)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while(i < len && arr[i] != n)
	{
		i++;
		c++;
	}
	return (c);
}

void	place(int n, int *arr, int len)
{
	if (rot(n,arr,len) < rev(n,arr,len))
	{
		while (arr[0] != n)
		{
			r(arr,len);
			ft_println("rb");
		}
	}
	else
	{
		rr(arr,len);
		ft_println("rrb");
	}
}
