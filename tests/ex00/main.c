#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d! = %d\n", 5, ft_iterative_factorial(5));
	printf("%d! = %d\n", 4, ft_iterative_factorial(4));
	printf("%d! = %d\n", 0, ft_iterative_factorial(0));
	printf("%d! = %d\n", 2000, ft_iterative_factorial(2000));
	printf("%d! = %d\n", -2, ft_iterative_factorial(-2));
	printf("%d! = %d\n", -3, ft_iterative_factorial(-3));
}
