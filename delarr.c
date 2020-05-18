#include "push_swap.h"

void delarr(char **str)
{
	char *temp;

	temp = *str;
	while(temp != NULL)
	{
		free(temp);
		temp++;
	}
	free(str);
}
