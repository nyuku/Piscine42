/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:58:45 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/19 09:42:08 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// verifier la longueur de la destination -> erreur taille car elle compte ici
// src debute a la fin de dest !
// dest[j + i] : on se place au dernier index pour concatener
char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
