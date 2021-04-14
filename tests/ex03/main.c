#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	for (int i = -3; i < 5; i++)
		for (int j = -3; j < 5; j++)
			printf("%d ^ %d = %d\n", i, j, ft_recursive_power(i, j));
}
