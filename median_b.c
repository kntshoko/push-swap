#include "push_swap.h"

int median_b(int *arr, int len)
{
	int ar[len];
	int temp;
	int i;
	int j;

	ft_memcpy(ar, arr, len);
	i = -1;
	while(++i < len)
	{
		j = -1;
		while(++j < len)
		{
			if(ar[i] > ar[j])
			{
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
	temp = ar[len/2];
	return(temp);
}
