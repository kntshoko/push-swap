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
		str = ok(v); 
		if(str!= NULL)
		{
			alen = wordcount(str);
printf (" main_push");
			a = convert(str, ' ');
			sortting(a, alen);
		//	free(a);
			free(str);
		}
	}
int i = -1;
while(a[++i])
printf (" %d", a[i]);
printf (" \n");
	return(0);
}
