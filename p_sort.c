#include "push_swap.h"

void p_sort(int *a, int *alen, int *b, int *blen)
{
	int i;
	while(*alen > 4)
	{
		i = median_a(a, *alen);
		while(4 < *alen && mid_a(i, a, *alen) != 1 )
		{
			if(a[0] < i)
			{
				ft_putendl("pb");
				p(a, alen, b, blen);
			}
			else
				place_a(i,a,*alen);
		}
	}
}
