/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:38:01 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/14 16:38:05 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb == 2147483647)
		return (1);
	i = 3;
	while (i < nb / 2 && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 1)
		return (2);
	if (nb == 2)
		return (3);
	while (nb < 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (2147483647);
}
