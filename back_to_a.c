#include "push_swap.h"

void back_to_a(int *a, int *alen, int *b, int *blen)
{
	while(*blen > 0)
	{
		place(max(b, *blen), b, *blen);
		ft_putendl("pa");
		p(b, blen, a, alen);
	}
}
