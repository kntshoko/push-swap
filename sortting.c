#include "push_swap.h"

void sortting(int *a, int alen)
{
	int b[alen];
	int blen;
	
	blen = 0;
	while(sort_a(a,alen) != 1)
	{
		push_to_b(a, &alen, b, &blen);
		push_to_a(a, &alen, b, &blen);
//		back_to_a(a, &alen, b, &blen);
//		push_to_b(a, &alen, b, &blen);
		while(blen > 0)
		{
			place(max(b, blen), b, blen);
			ft_putendl("pa");
			p(b, &blen, a, &alen);
		}
	}
}
