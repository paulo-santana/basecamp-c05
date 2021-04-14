#include <stdio.h>
#include "ft_iterative_power.c"

int	main(void)
{
	for (int i = -3; i < 5; i++)
		for (int j = -3; j < 5; j++)
			printf("%d ^ %d = %d\n", i, j, ft_iterative_power(i, j));
}
