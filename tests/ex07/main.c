#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("uso: %s option\n", argv[0]);
		printf("em que option pode ser 0 ou 1\n");
		return (1);
	}
	if (argv[1][0] == '0')
	{
		printf("teste simples\n");
		if (ft_find_next_prime(6) == 7 &&
			ft_find_next_prime(-1) == 2 &&
			ft_find_next_prime(-30) == 2 &&
			ft_find_next_prime(2) == 2 &&
			ft_find_next_prime(-2222220) == 2 &&
			ft_find_next_prime(7) == 7 &&
			ft_find_next_prime(8) == 11 &&
			ft_find_next_prime(2147483647) == 2147483647)
		{
			printf("Ok :D\n");
		}
		else
		{
			printf("Not Ok :(\n");
		}
		
	}
	else
	{
		for (int i = -3; i < 2147483647; i++)
		{
			if (i == 1000)
				i = 2147482645;
			printf("%d => %d\n", i, ft_find_next_prime(i));
		}
		printf("%d => %d\n", 2147483647, ft_find_next_prime(2147483647));
	}
}
