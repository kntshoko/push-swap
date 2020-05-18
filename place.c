#include "push_swap.h"

int rev(int n, int *arr, int len)
{
	int c;

	c = 0;
	while(--len && arr[len] != n)
		c++;
	return(c);
}

int rot(int n, int *arr, int len)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while(i < len && arr[i] != n)
	{
		i++;
		c++;
	}
	return(c);
}

void place(int n, int *arr, int len)
{
	if(rot(n, arr, len) < rev(n, arr, len))
	{
		while(arr[0] != n)
		{
			ft_putendl("rb");
			r(arr, len);
		}
	}
	else if(rev(n, arr, len) > 0)
	{
		while(arr[0] != n)
		{
			ft_putendl("rrb");
			rr(arr,len);
		}
	}
}

