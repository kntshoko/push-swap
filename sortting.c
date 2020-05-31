#include "push_swap.h"

void sortting(int *a, int alen)
{
	int b[alen];
	int blen;
	blen = 0;
		p_sort(a, &alen, b, &blen);

while(alen > 0)
	{
		place(min(a,alen),a,alen);
		ft_putendl("pb");
		p(a,&alen,b,&blen);

	}


	while(blen > 0)
	{
		place(max(b,blen),b,blen);
		ft_putendl("pa");
		p(b,&blen,a,&alen);
	}
}
