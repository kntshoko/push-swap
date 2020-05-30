#include "push_swap.h"

void sort_three(int *a, int alen)
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
					
					else if(a[0] < a[1] && a[0] < a[2])
					{
						ft_putendl("rra");
						rr(a,alen);
					}
					else if(a[0] > a[1] && a[0] < a[2] )
					{
						ft_putendl("rra");
						rr(a,alen);
					}
					else if(a[0] > a[2] && a[1] > a[2] )
					{
						ft_putendl("rra");
						rr(a,alen);
					}
				}
}
