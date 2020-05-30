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
			a = convert(str, ' ');
			if(alen == 3 )
				sort_three(a,alen);
			else if(alen < 6)
				sort_five(a, alen);
			else
				sortting(a, alen);
			free(a);
			delarr(str);
		}
	}
	return(0);
}
