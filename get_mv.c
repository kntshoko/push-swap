#include "push_swap.h"

char *get_mv(int fd)
{
	char *str;
	char *temp;
	char *ins;
	
	while(get_next_line(fd,&str) == 1)
	{
		if(ins != NULL)
		{
			temp = ft_strdup(ins);
			ins = ft_joint(temp,"  ",str);
			ft_strdel(&temp);
		}
		else
			ins = ft_strdup(str);
	}
	return (ins);
}

