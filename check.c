#include "push_swap.h"


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

int ok(char *str)
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


int main(int c, char **v)
{
	char *str;
	char *ins;
	char *temp;

	while(get_next_line(0,&str) == 1)
	{
		if(ins != NULL)
		{
			temp = ft_strdup(ins);
			free(ins);
			ins = ft_joint(temp,"  ",str);
		}
		else
			ins = ft_strdup(str);
	}
	if (c > 1)
	{
		if(ok(v[1]) == 1)
		{
			ft_putendl("ok");
		}
		else
		{
			ft_putendl("error");
		}
	}	
	return(0);
}

