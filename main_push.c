#include "push_swap.h"

int main(int c, char **v)
{
	int *a;
	int alen;
	char **str;

	str = NULL;
	a = NULL;
	if(c > 1)
	{
		str = ok(v); 
		if(str!= NULL)
		{
			alen = wordcount(str);
			a = convert(str,alen);
	
			if(alen == 3 && sort_a(a,alen) != 1)
				sort_three(a,alen);
			else if(alen == 2 && sort_a(a, alen) != 1)
			{
				s(a,alen);
				ft_putendl("sa");
			}
			else if(alen > 1 && alen < 6 && sort_a(a,alen) != 1)
				sort_five(a, alen);
			else if(alen > 5 && sort_a(a,alen) != 1)
				sortting(a, alen);
			if(alen > 0)
				free(a);
			delarr(str);
		}
	}
	return(0);
}
