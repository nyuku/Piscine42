/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:34:49 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/16 21:15:17 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_valid;

	is_valid = 0;
	if (*str == 0)
	{
		is_valid = 1;
		return (is_valid);
	}
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			is_valid = 1;
		else
		{
			is_valid = 0;
			return (is_valid);
		}
		str++;
	}
	return (is_valid);
}
