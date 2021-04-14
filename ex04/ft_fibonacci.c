#include <stdio.h>

int	g_previous_answers[47];

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 47)
		return (0);
	if (g_previous_answers[index] != 0)
		return (g_previous_answers[index]);
	int result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	g_previous_answers[index] = result;
	return (result);
}
