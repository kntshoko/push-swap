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
			if(alen < 4 )
			{
				while(sort_a(a, alen) != 1)
				{
					if(a[0] > a[1])
					{
						ft_putendl("sa");
						s(a, alen);
					}
					else if(a[0] > a[1] && a[0] > a[2])
					{
                                              ft_putendl("ra");
                                              r(a, alen);
					}
					
					else if(a[0] < a[1] && a[0] > a[2])
					{
						ft_putendl("rra");
						rr(a,alen);
					}
				}
			}
			else
			sortting(a, alen);
			free(a);
			delarr(str);
		}
	}
	return(0);
}
