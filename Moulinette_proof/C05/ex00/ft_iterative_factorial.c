/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:51:49 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/23 09:54:58 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
