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
			if(max(a,alen) == a[0])
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
		if(alen == 2)
		{
			s(a,alen);
			ft_putendl("sa");
		}
		else
		{
			while(blen > 0)
			{
				if(blen > 1 && b[0] < b[1])
				{
					s(b,blen);
					ft_putendl("sb");
				}
				else if(a[0] > a[1])
				{
					s(a,alen);
					ft_putendl("sa");
				}
				else if(sort_a(a,alen) != 1)
				{
					if(alen == 3)
						sort_three(a,alen);
					else
					{
						ft_putendl("pb");
						p(a,&alen,b,&alen);
					}
				}
				else
				{
					p(b, &blen, a, &alen );
					ft_putendl("pa");
				}	
			}
		}

	}

}
