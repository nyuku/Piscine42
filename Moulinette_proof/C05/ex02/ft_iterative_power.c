/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:36:31 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/23 09:55:48 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// 0 puissance 0 = 1 par convention (du coup je traite que power == 0)
// une puissance n'est pas negative ici
// gerer la valeur max de int :
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	result = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
