/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:20:30 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/23 18:01:36 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned long	i;
	long			result;

	if (nb == 0)
		return (0);
	i = 1;
	result = 0;
	while (result <= (long)nb)
	{
		result = i * i;
		i++;
	}
	return (0);
}
