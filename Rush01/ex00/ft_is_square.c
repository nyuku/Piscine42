/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:56:06 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/14 14:46:19 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_square(int total_numbers_entered)
{
	int	i;
	int	number_per_side;

	i = 0;
	number_per_side = 1;
	if (total_numbers_entered == 0)
		return (0);
	while (i <= total_numbers_entered)
	{
		if ((i * i) == total_numbers_entered)
		{
			number_per_side = i;
			return (number_per_side);
		}
		i++;
	}
	return (0);
}
