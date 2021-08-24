/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:35:36 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/23 09:59:11 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// is_prime : compteur pour savoir combien de fois le chiffre a pu etre divise
// si 2x seulement = c'est un nombre premier
// si la somme des chiffres vaut 2, 5 ou 7 c'est un nombre premier
int	ft_is_prime(int nb)
{
	int	i;
	int	is_prime;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = nb;
	is_prime = 0;
	while (i > 0)
	{
		if (nb % i == 0)
			is_prime++;
		i--;
	}
	if (is_prime == 2)
		return (1);
	else
		return (0);
}
