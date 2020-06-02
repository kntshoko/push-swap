#include "push_swap.h"

void sort_five(int *a, int alen)
{
	int b[alen];
	int blen;

	blen = 0;
	while(sort_a(a, alen) != 1)
	{
		while(alen > 3)
		{
			if(max(a,alen) == a[0] || min(a,alen) == a[alen -1])
			{
				ft_putendl("rra");
				rr(a,alen);
			}
			if(min(a,alen) == a[0])
			{
				p(a, &alen, b, &blen );
				ft_putendl("pb");
			}
			else
			{
				ft_putendl("rra");
				rr(a,alen);

			}
		}

		if(alen == 3)
			sort_three(a, alen);
		if(alen == 2)
		{
			s(a,alen);
			ft_putendl("sa");
		}
		while(blen > 0)
		{
			ft_putendl("pa");
			p(b,&blen,a,&alen);
		}
	}
}
