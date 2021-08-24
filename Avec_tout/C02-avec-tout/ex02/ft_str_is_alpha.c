/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:30:44 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/13 14:26:30 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_valid;

	is_valid = 0;
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			is_valid = 1;
		else if (*str >= 'a' && *str <= 'z')
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
