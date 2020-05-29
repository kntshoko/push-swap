#include "push_swap.h"

int max(int *arr, int len)
{
	int t;
	int i;

	i = 0;
	t= arr[0];
	while(++i < len)
	{
		if(arr[i] > t)
			t = arr[i];
	}
	return(t);
}

int min(int *arr, int len)
{
	int t;
	int i;

	i = 0;
	t = arr[0];
	while(++i < len)
	{
		if(arr[i] < t)
			t = arr[i];
	}
	return(t);
}
