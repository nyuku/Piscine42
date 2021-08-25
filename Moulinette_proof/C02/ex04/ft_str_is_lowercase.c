/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:16:03 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/16 14:27:07 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = 0;
	if (str[0] == '\0')
	{
		is_valid = 1;
		return (is_valid);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			is_valid = 1;
		else
		{
			is_valid = 0;
			return (0);
		}
		i++;
	}
	return (is_valid);
}
