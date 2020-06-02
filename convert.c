#include "push_swap.h"

int *convert(char **str, int len)
{
	int i;
	int ar[len];

	i = 0;
	while(str[i] != NULL)
	{
		ar[i] = ft_atoi(str[i]);
		i++;
	}
	return(ar);
}
