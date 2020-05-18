#include "push_swap.h"

int sort_a(int *arr, int len)
{
	int i;

	i = 1;
	while(i < len)
	{
		if(arr[i - 1] > arr[i])
			return(0);
		i++;
	}
	return(1);
}
