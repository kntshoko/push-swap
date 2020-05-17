#include "push_swap.h"

//ft_cmp and ft_joint must be in th libft clen that up also

int	ft_cmp(const char *s1, const char *s2)
{
	size_t l;

	l = 0;
	while (s1[l] && (unsigned char)s1[l] == (unsigned char)s2[l])
		l++;
	if ((unsigned char)s1[l] > (unsigned char)s2[l])
		return (-1);
	else if ((unsigned char)s1[l] < (unsigned char)s2[l])
		return (1);
	return (0);
}

char	*ft_joint(char *s1, char *s2, char *s3)
{
	char	*str;

	if (!s1 || !s2 || !s3)
		return (NULL);
	if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3))))
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	ft_strcat(str, s3);
	return ((char *)str);
}

//include a new void function for the while loop below, to make the funion do_check hove less lines of code
//

int do_check(char **mv, int *a, int alen, int blen)
{
	int b[alen];
	int i;

	i = -1;
	while(mv[++i] != NULL)
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
	}
	if(sort(a,alen) == 1 && blen == 0)
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

// the main currently has more than 25 lines of code, clean it up !

int main(int c, char **v)
{
	char *ins;
	char **mv;
	int *a;
	int alen;

	ins = get_mv(0);
	mv = ft_strsplit(ins, ' ');
	alen = wordcount(ft_strsplit(v[1], ' '));
	a = convert(ft_strsplit(v[1], ' '),alen);
	if (c > 1)
	{
		if(ok(v[1]) == 1)
		{
			if(mv)
			{
				if(do_check(mv,a,alen,0) == 1)
					ft_putendl("ok");
				else
					ft_putendl("ko");
			}	
		}
		else
			ft_putendl("error");
	}
	ft_strdel(&ins);
	free(a);
	return(0);
}
