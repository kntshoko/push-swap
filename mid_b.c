#include "push_swap.h"

int mid_b(int m, int *a, int blen)
{
	int i;

	i = 0;
	while (i < blen)
	{
		if (a[i] > m)
			return (0);
		i++;
	}
	return (1);
}
