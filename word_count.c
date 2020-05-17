# include "push_swap.h"

int wordcount(char **s)
{
	int i;

	i = 0;
	while(s[i] != NULL)
		i++;
	return(i);
}
