#include "push_swap.h"

static int match(char **s)
{
	int i;
	int j;

	i = 0;
	while(s[i] != NULL)
	{
		j = 0;
		while(s[j] != NULL)
		{
			if (i == j)
				j++;
			if(ft_cmp(s[i], s[j]) == 0)
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}

static char **st(char *s)
{
	int i;
	char **str;

	str = NULL;
	i = 0;
	while(s[i])
	{
		if((ft_isdigit(s[i]) == 1 || s[i] == ' ')
		&& s[i] != '\0')
			i++;
		else
			return(NULL);
	}
	str = ft_strsplit(s, ' ');
	if (match(str) == 1)
	{
		free(str);
		return (NULL);
	}
	return (str);
}

static char **ar(char **s, int l)
{
	int i;
	char *str;
	char *temp;
	char **d;

	i = 1;
	str = ft_strnew(0);
	while(i < l)
	{
		temp = ft_strdup(str);
		free(str);
		str = ft_joint(temp, " ", s[i]);
		free(temp);
		i++;
	}
	d = st(str);
	free(str);
	return(d);
}

char **ok(char **s)
{
	char **str;
	int i;

	str = NULL;
	i = 1;
	while(s[i][0] != '-' && s[i] != NULL)
		i++;
	if(i == 2)
		str = st(s[1]);
	else if (i > 2)
		str = ar(s, i);
	if (str != NULL)
		return(str);
	return(str);
}
