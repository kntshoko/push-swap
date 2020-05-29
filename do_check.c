#include "push_swap.h"

int do_check(char **mv, int *a, int alen)
{
	int b[alen];
	int blen;
	int i;

	i = 0;
	blen = 0;
	while(mv[i] != NULL)
	{
		if(ft_cmp(mv[i], "sa") == 0)
			s(a,alen);	
		else if(ft_cmp(mv[i], "sb") == 0)
			s(b,blen);
		else if(ft_cmp(mv[i], "ra") == 0)
			r(a,alen);
		else if(ft_cmp(mv[i], "rb") == 0)
			r(b,blen);
		else if(ft_cmp(mv[i], "pa") == 0)
			p(b,&blen,a,&alen);
		else if(ft_cmp(mv[i],"pb") == 0)
			p(a,&alen,b,&blen);
		else if(ft_cmp(mv[i], "rra") == 0)
			rr(a,alen);
		else if(ft_cmp(mv[i], "rrb") == 0)
			rr(b,blen);
		else if(ft_cmp(mv[i], "rrr") == 0)
		{
			r(b,blen);
			r(a,alen);
		}
		else if(ft_cmp(mv[i], "ss") == 0)
		{
			rr(b,blen);
			rr(a,alen);
		}
		else if(ft_cmp(mv[i], "rr") == 0)
		{
			r(b,blen);
			r(a,alen);
		}
		i++;
	}
	if(sort_a(a,alen) == 1 && blen == 0)
		return(1);
	return(0);
}

