#include "push_swap.h"

int median_a(int *arr, int len)
{
	int ar[len];
	int temp;	
	int i; 
	int j;

	ft_memcpy(ar, arr, len*sizeof(int));
	i = -1;
	while(++i < len)
	{
		j = -1;
		while(++j < len)
		{
			if(ar[i] < ar[j])
			{
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}

	j = 10;
/*	while(j > 2)
	{
		if(len / j && (len / j) != 1)
			return(arr[len/j]);
		j = j- 2;
	}*/
	return(ar[len/4]);
}
