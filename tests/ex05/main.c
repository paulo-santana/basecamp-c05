#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int values[] = { -64, -1, 0, 1, 2, 4, 6, 9, 20, 25, 36, 49, 64, 2147395600 };
	for (int i = 0; i < 14; i++)
	{
		int sqrt = ft_sqrt(values[i]);
		printf("sqrt(%d): %d\n", values[i], sqrt);
	}
			
}
