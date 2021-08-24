/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:25:20 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/23 23:42:08 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Duplicate S, returning an identical malloc'd string. */

#include <stdlib.h>
int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*src_cpy;

	src_cpy = (char*)malloc(sizeof(*src_cpy) * (ft_strlen(src) + 1));
	if (src_cpy == NULL)
		return (NULL);

	return ft_strcpy(src_cpy, src);
}
/* *
 * count how many chars there are in a string
 * */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* *
 * Copie la chaine source dans la destination
 * */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
