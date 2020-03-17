#include "push_swap.h"


int		ssort(int *arr, int len)
{
	int i;

	i = 1;
	while (i < len)
	{
		if (arr[i - 1] > arr[i])
			return (0);
		i++;
	}
	return (1);
}

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

int wdct(char **str)
{
        int i = 0;

        while(str[i] != NULL)
                i++;
        free(str);
        return(i);
}

int *cnv(char **str, int len)
{
        int i;
        int *a;

        a = (int *)malloc(sizeof(int)*(len));
        i = 0;
        while(str[i] != NULL)
        {
                a[i] = ft_atoi(str[i]);
                i++;
        }
        free(str);
        return (a);
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

int okay(char *str)
{
        int i;

        i = 0;
        while(str[i])
        {
                if((str[i] == '-' || str[i] == ' ' || ft_isdigit(str[i]) == 1) && str[i] != '\0')
                        i++;
                else
                        return(0);
        }
        return 1;
}

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
		{
			s(a,alen);	
		}
		else if(ft_cmp(mv[i], "sb") == 0)
		{
			s(b,blen);
		}else if(ft_cmp(mv[i], "ra") == 0)
		{
			r(a,alen);
		}else if(ft_cmp(mv[i], "rb") == 0)
		{
			r(b,blen);
		}else if(ft_cmp(mv[i], "pa") == 0)
		{
			p(b,&blen,a,&alen);
		}else if(ft_cmp(mv[i],"pb") == 0)
		{
			p(a,&alen,b,&blen);
		}else if(ft_cmp(mv[i], "rra") == 0)
		{
			rr(a,alen);
		}else if(ft_cmp(mv[i], "rrb") == 0)
		{
			rr(b,blen);
		}
		i++;
	}
	if(ssort(a,alen) == 1 && blen == 0)
		return(1);
	return(0);
}


int main(int c, char **v)
{
	char *str;
	char *ins;
	char *temp;
	char **mv;
	int *a;
	int alen;

	while(get_next_line(0,&str) == 1)
	{
		if(ins != NULL)
		{
			temp = ft_strdup(ins);
			ins = ft_joint(temp,"  ",str);
		}
		else
			ins = ft_strdup(str);
	}
		mv = ft_strsplit(ins,' ');
	alen = wdct(ft_strsplit(v[1], ' '));
	a = cnv(ft_strsplit(v[1],' '),alen);
	if (c > 1)
	{
		if(okay(v[1]) == 1)
		{
			if(mv)
			{
				if(do_check(mv,a,alen) == 1)
				{
					ft_putendl("ok");
				}
				else
				{
					ft_putendl("ko");
				}
			}	
		}
		else
		{
			ft_putendl("error");
		}
	}
	int i = 0;
	while (i < alen)
	{
		ft_putnbr(a[i]);
		ft_putstr(" ");
		i++;
	}
ft_putendl(" ");
	return(0);
}
