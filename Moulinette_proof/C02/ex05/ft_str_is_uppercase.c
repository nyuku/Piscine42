/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 22:02:20 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/16 14:27:30 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_valid;

	is_valid = 0;
	if (*str == 0)
	{
		is_valid = 1;
		return (is_valid);
	}
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
