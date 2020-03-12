#include "push_swap.h"

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

