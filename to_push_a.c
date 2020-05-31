#include "push_swap.h"

int	to_r(int i, int *arr, int len)
{
	int j;

	j = 0;
	while(j < len )
	{
		if(arr[j] < i)
			break;
		j++;
	}
	return(arr[j]);
}

int	to_rr(int i, int *arr, int len)
{
	len--;
	while(len)
	{
		if(arr[len] < i)
			break;
		len--;
	}
	return(arr[len]);
}

int	to_rb(int i, int *arr, int len)
{
	int j;

	j = 0;
	while(j < len )
	{
		if(arr[j] > i)
			break;
		j++;
	}
	return(arr[j]);
}

int	to_rrb(int i, int *arr, int len)
{
	len--;
	while(len)
	{
		if(arr[len] > i)
			break;
		len--;
	}
	return(arr[len]);
}
