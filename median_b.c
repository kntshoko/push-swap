#include "push_swap.h"

int median_b(int *arr, int len)
{
	int *a;
	int temp;
	int i;
	int j;

	a = malloc(len*sizeof(int));
	ft_memcpy(a, arr, len);
	i = -1;
	while(++i < len)
	{
		j = -1;
		while(++j < len)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	temp = a[len/2];
	free(a);
	return(temp);
}
