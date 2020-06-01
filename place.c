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
	else 
	{
		while(arr[0] != n)
		{
			ft_putstr("rrb\n");
			rr(arr,len);
		}
	}
}



void place_a(int i, int *arr, int len)
{
	int ro;
	int rro;

	ro = to_r(i,arr,len);
	rro = to_rr(i,arr,len);
	if( rot(ro, arr, len) < rev(rro, arr,len))
	{
		while( arr[0] != ro)
		{
			ft_putendl("ra");
			r(arr, len);
		}
	}
	else 
	{
		while(arr[0] != rro)
		{
			ft_putendl("rra");
			rr(arr,len);
		}
	}
}

