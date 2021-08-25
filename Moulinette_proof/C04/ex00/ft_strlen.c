/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:51:25 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/21 17:29:56 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* *
 * Compte et retourne le nombre de char dans une chaine
 * */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}
