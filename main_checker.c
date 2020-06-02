#include "push_swap.h"

int main(int c, char **v)
{
	char *ins;
	char **mv;
	char **str;
	int *a;
	int alen;

	
	if (c > 1)
	{
		if((str = ok(v)) != NULL)
		{
			ins = get_mv(0);
			mv = ft_strsplit(ins, ' ');
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
						ft_strdel(&ins);
				}
				else
					ft_putendl("Error1");
					
			}
			else if(sort_a(a,alen) == 1)
				ft_putendl("OK");
			else 
				ft_putendl("KO");
			free(a);
		}
		else
			ft_putendl("Error2");
				if(str)
		delarr(str);
	if(mv)
		delarr(mv);
	}
	
	//	

	return(0);
}
