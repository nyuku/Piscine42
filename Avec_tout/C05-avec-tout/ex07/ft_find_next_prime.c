/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:31:00 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/23 21:43:12 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i <= ft_sqrt(nb))
	{
		printf("%d\n", ft_sqrt(nb));
		if (nb % i == 0)
			return (1);
		i++;
	}
	return (i);
}

int	ft_sqrt(int nb)
{
	long	i;

	if (nb == 0)
		return (0);
	i = 1;
	while (i <= (long)nb / 2)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (i);
}
