/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:14:15 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/22 23:23:51 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// si nb negatif on retourne 0
// on retourne 1 pour 0 car convention
// si nb vaut 13 ou plus > stack overflow
int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
