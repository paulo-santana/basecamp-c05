/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:34:59 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/14 16:35:13 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (nb);
}
