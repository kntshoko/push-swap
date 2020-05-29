#include "push_swap.h"

int main(int c, char **v)
{
	char *ins;
	char **mv;
	char **str;
	int *a;
	int alen;

	ins = get_mv(0);
	mv = ft_strsplit(ins, ' ');
	if (c > 1)
	{
		if((str = ok(v)) != NULL)
		{
			alen = wordcount(str);
			a = convert(str, alen);
			if(mv)
			{
				if((check_moves(mv)) == 1)
				{
					if(do_check(mv,a,alen) == 1)
						ft_putendl("OK");
					else
						ft_putendl("KO");
					delarr(mv);
				}
				else
					ft_putendl("Error");
			}
			else if(sort_a(a,alen) == 1)
				ft_putendl("OK");
			else 
				ft_putendl("KO");
			free(a);
		}
		else
			ft_putendl("Error");
	}
	if(!ins)
		ft_strdel(&ins);
	if(!str)
		delarr(str);
	return(0);
}
