#include "push_swap.h"

void sort_five(int *a, int alen)
{
	int b[alen];
	int blen;

	blen = 0;
	while(sort_a(a, alen) != 1)
	{
		while(alen != 3)
		{
			if(max(a,alen)== a[0])
			{
				ft_putendl("ra");
				r(a,alen);
			}
			else
			{
				p(a, &alen, b, &blen );
				ft_putendl("pb");
			}
		}

		if(alen == 3)
			sort_three(a, alen);
		while(blen > 0)
		{
			p(b, &blen, a, &alen );
			ft_putendl("pa");
		}
		sortting(a,alen);
	}

	int i = 0 ;
 	while(i < alen)
		printf("%d ", a[i++]);
	ft_putendl(" ");
}
