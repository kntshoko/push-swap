#include "push_swap.h"

int main(int c, char **v)
{
	int *a;
	int alen;
	char **str;

	str = NULL;
	a = NULL;
	if(c > 1)
	{
		if((str = ok(v)) != NULL)
		{
			alen = wordcount(str);
			a = convert(str, ' ');
			sortting(a, alen);
			free(a);
			free(str);
		}
	}
	return(0);
}
