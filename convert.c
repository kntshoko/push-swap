#include "push_swap.h"

int *convert(char **str, int len)
{
	int i;
	int *a;

	a = (int *)malloc(sizeof(int)*(len));
	i = 0;
	while(str[i] != NULL)
	{
		a[i] = ft_atoi(str[i]);
		i++;
	}
	return(a);
}
