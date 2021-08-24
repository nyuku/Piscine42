/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:20:30 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/24 21:34:58 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	if (nb == 0)
		return (0);
    if (nb == 1)
        return 1;
	if (nb % 2 == 0)
		i = 2;
	if (nb % 2 != 0)
		i = 1;
	while (i <= nb / 2)
	{
		if ((i * i) == nb)
			return (i);
		i += 2;
	}
	return (0);
}
