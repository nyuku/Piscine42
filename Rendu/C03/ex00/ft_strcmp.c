/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:06:05 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/21 21:12:22 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Deux tableaux identiques = 0
Premier char different dans s1, plus grand (ascii) que s2 : > 0
Premier char different dans s1, plus petit (ascii) que s2 : < 0
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
		return (s1[i] - s2[i]);
	return (0);
}
