#include "push_swap.h"

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
