#include "push_swap.h"
#include "libft/libft.h"

void push_to_a(int *a, int *alen, int *b, int *blen)
{
	int i;

	while(sort_b(b, *blen) != 1)
	{
		i = median_b(b, *blen);
		while(sort_b(b, *blen) != 1 && mid_b(i, b, *blen) != 1)
		{
			if(b[0] < b[1])
			{
				ft_putstr("sb\n");
				s(b, *blen);
			}
			else if(b[0] > i)
			{
				ft_putstr("pa\n");
				p(b, blen, a, alen);
			}
			else
			{
				ft_putstr("rrb\n");
				rr(b, *blen);
			}
		}
	}
}
