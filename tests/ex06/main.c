#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	counter;

	counter = 0;
	for (unsigned int i = 0; i <= 2147483647; i++)
	{
		if (i == 1000)
			i = 2147483477;
		if (ft_is_prime(i))
		{
			printf("%d", i);
			if (counter < 19)
			{
				printf(" - ");
				counter++;
			}
			else
			{
				printf("\n");
				counter = 0;
			}
		}
	}
}
