/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 10:57:51 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/05 11:09:59 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	s(int *a, int len)
{
	int temp;

	if (len > 1)
	{
		temp = a[0];
		a[0] = a[1];
		a[i] = temp;
	}
}

void	p(int *a, int *alen, int *b, int *blen)
{
	int j;
	int i;

	j = -1;
	if (*alen > 0)
	{
		temp = a[0];
		while (((j++) + 1) < *alen)
			a[j] = a[j + 1];
		i = *blen;
		while (i > 0)
		{
			b[i] = b[i - 1];
			i--;
		}
		b[0] = temp;
	}
	*alen -= 1;
	*blen += 1;
}

void	r(int *a, int i)
{
	int j;
	int temp;

	j = 0;
	if (i > 0)
	{
		temp = a[0];
		while (++j < i)
			a[j - 1] = a[j];
		a[j - 1] = temp;
	}
}

void	rr(int *a, int i)
{
	int temp;

	if (i >= 1)
	{
		while (--i > 0)
			temp = a[i];
		a[0] = temp;
	}
}
