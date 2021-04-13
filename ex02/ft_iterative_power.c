int	ft_iterative_power(int nb, int power)
{
	int	base;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	base = nb;
	while (--power != 0)
		nb = nb * base;
	return nb;
}
