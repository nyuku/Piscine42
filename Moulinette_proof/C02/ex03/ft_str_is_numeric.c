/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:22:27 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/13 12:06:54 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	is_valid;

	is_valid = 0;
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			is_valid = 1;
		else
		{
			is_valid = 0;
			return (is_valid);
		}
		str ++;
	}
	return (is_valid);
}
