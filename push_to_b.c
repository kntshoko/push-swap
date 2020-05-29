#include "push_swap.h"

void push_to_b(int *a, int *alen, int *b, int *blen)
{
	 int i;

	while(sort_a(a, *alen) != 1)
	{
		i = median_a(a, *alen);
		while(sort_a(a, *alen) != 1 && mid_a(i, a, *alen) != 1 )
		{
			if(a[0] > a[1])
			{
				ft_putendl("sa");
				s(a, *alen);
			}
			else if(a[0] < i)
			{
				ft_putendl("pb");
				p(a, alen, b, blen);
			}
			else
			{
				ft_putendl("ra");
				r(a, *alen);
			}
		}
	}
}
