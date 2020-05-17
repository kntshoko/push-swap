#include "push_swap.h"

int target(int n, int *arr, int len)
{
	int m;
	int i;

	m = min(arr, len);
	i = 0;
	while(i < len)
	{
		if(arr[i] > m && n > arr[i])
			m = arr[i];
		i++;
	}
	return(m);
}
