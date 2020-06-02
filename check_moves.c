#include "push_swap.h"

int check_moves(char **mv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(mv[j] != NULL)
		j++;
	while(mv[i] != NULL && ((ft_cmp(mv[i], "sa")) == 0 
		|| (ft_cmp(mv[i], "sb")) == 0
		|| (ft_cmp(mv[i], "pa")) == 0
		|| (ft_cmp(mv[i], "pb")) == 0
		|| (ft_cmp(mv[i], "ra")) == 0
		|| (ft_cmp(mv[i], "rb")) == 0
		|| (ft_cmp(mv[i], "rrb")) == 0
		|| (ft_cmp(mv[i], "rra")) == 0
		|| (ft_cmp(mv[i], "ss")) == 0
		|| (ft_cmp(mv[i], "rr")) == 0
		|| (ft_cmp(mv[i], "rrr")) == 0))
		i++;
	if( i != j)
		return(0);
	return(1);
}

