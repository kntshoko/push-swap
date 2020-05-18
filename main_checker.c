#include "push_swap.h"

int do_check(char **mv, int *a, int alen)
{
	int b[alen];
	int blen;
	int i;

	i = 0;
	blen = 0;
	while(mv[i] != NULL)
	{
		if(ft_cmp(mv[i], "sa") == 0)
			s(a,alen);	
		else if(ft_cmp(mv[i], "sb") == 0)
			s(b,blen);
		else if(ft_cmp(mv[i], "ra") == 0)
			r(a,alen);
		else if(ft_cmp(mv[i], "rb") == 0)
			r(b,blen);
		else if(ft_cmp(mv[i], "pa") == 0)
			p(b,&blen,a,&alen);
		else if(ft_cmp(mv[i],"pb") == 0)
			p(a,&alen,b,&blen);
		else if(ft_cmp(mv[i], "rra") == 0)
			rr(a,alen);
		else if(ft_cmp(mv[i], "rrb") == 0)
			rr(b,blen);
		i++;
	}
	if(sort_a(a,alen) == 1 && blen == 0)
		return(1);
	return(0);
}

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
				if(do_check(mv,a,alen) == 1)
					ft_putendl("ok");
				else
					ft_putendl("ko");
			}	
		}
		else
			ft_putendl("error");
	}
	ft_strdel(&ins);
	ft_strdel(str);
	return(0);
}
