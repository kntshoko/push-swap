#include "push_swap.h"

char *get_mv(int fd)
{
	char *str;
	char *temp;
	char *ins;
	
	ins = NULL;
	while(get_next_line(fd,&str) == 1)
	{
		if(ins != NULL)
		{
			temp = ft_strdup(ins);
			ft_strdel(&ins);
			ins = ft_joint(temp,"  ",str);
		ft_strdel(&str);
			ft_strdel(&temp);
		}
		else if(str != NULL)
			ins = ft_strdup(str);
	}
	return (ins);
}

