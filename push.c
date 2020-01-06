/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 16:44:55 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/06 15:47:36 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
	int a[100] = {-628083, -877854, 238044, 19312, -767815, -649991, -602873, -800300, 273549, 909216, -642344, -537458, -36784, 670683, 474065, -505489, 553415, -502498, 557516, -778192, -323690, 309941, 49708, 589761, 206055, -971387, -191540, -978966, 948515, -375104, 793936, -211589, -402422, -887385, -503526, -675510, -441844, -832151, -961999, -438530, 332015, -248319, -277433, 835477, -412313, 600820, -913251, -790399, 853516, 865454, 731664, 363765, 851733, -732457, 585548, -227123, 981722, -881759, 789696, 251408, 717652, -529864, -162694, 35089, -158124, 660955, 152746, -660847, 217463, -69307, 758821, 665095, 685650, 272546, 407693, -353629, 657165, 128547, 656143, -895670, -121842, -769527, 194431, 531045, -582781, -94138, -365459, -350826, 489695, 783071, 188463, 640599, -150520, 757111, -628646, 459249, 455085, -391462, 665142, -594865};
	int b[100];
	int alen = 100;
	int blen = 0;

	int i = 195;
	while(i--) //(sort(a,alen) != 1 || blen > 0)
	{
		if (a[0] > a[alen - 1] && a[alen -1] < a[alen - 2])
		{
			ft_putstr("rra ");
            rr(a,alen);
		}	
		else if (a[0] > a[1] && a[0] < a[alen -1])
        {
            ft_putstr("sa ");
            s(a,alen);
        }
		else if (a[0] < a[1] && a[0] < a[alen - 1])
		{
			ft_putstr("pb ");
        	place(target(a[0],b,blen),b,blen);
        	p(a,&alen,b,&blen);
		}
		else if (a[0] > a[alen -1])
		{
			ft_putstr("ra ");
            r(a,alen);
		}
		if (sort(a,alen) == 1)
		{
			while(mn(a,alen) < mx(b,blen))
			{
				ft_putstr("pb ");
            	place(target(a[0],b,blen),b,blen);
            	p(a,&alen,b,&blen);
			}
			place(mx(b,blen),b,blen);
			while (blen > 0)
			{
				ft_putstr("pa ");
                p(b,&blen,a,&alen);
			}
		}
	}
	ft_putendl("");
	int y = 0;
	while (y < alen)
	{
		printf("a[%d] = %d\n",y,a[y]);
		y++;
	}

	    y = 0;
    while (y < blen)
    {
        printf("b[%d] = %d\n",y,b[y]);
        y++;
    }

	return (0);
}
