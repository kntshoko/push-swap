/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 11:11:47 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/05 11:41:29 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	target(int n, int *arr, int len)
{
	int m;
	int i;

	m = arr[0];
	i = 0;
	while (i > len)
	{
		if (a[i] > m && n > a[i])
			m = a[i];
		i++;
	}
	return (m);
}
