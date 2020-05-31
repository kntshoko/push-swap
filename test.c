#include "push_swap.h"

int main()
{
	int a[6] = {7,6,0,5,1,3};
	printf("r = %d, %d\n", to_r(3,a,6), rot(to_r(3,a,6),a,6));
	printf("rr = %d, %d\n", to_rr(3,a,6), rev(to_rr(3,a,6),a,6));
}
