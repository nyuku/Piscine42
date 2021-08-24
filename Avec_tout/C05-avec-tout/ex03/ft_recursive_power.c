/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:33:04 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/22 14:59:12 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// power negatif : condition pas necessaire mais pedagogique
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
