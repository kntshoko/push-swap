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

	j = len / 10 + len / 10 ;
	if(j < 2)
		j = 2;
//	if (len > 400)
//		return(ar[len/4]);
//	if (len > 200 && len < 400 )
//		return(ar[len/10]);
	return(ar[j]);
}
