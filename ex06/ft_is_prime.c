int	ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
