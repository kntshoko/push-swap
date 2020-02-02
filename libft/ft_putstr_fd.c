/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:04:40 by kntshoko          #+#    #+#             */
/*   Updated: 2019/06/12 14:54:19 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int l;

	if (!s)
		return ;
	l = 0;
	while (s[l] != '\0')
	{
		ft_putchar_fd(s[l], fd);
		l++;
	}
}