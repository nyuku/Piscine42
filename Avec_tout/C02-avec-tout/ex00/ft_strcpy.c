/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:11:05 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/16 14:24:55 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//dest − This is the pointer to the destination array where the content is to be copied.
//src − This is the string to be copied.
//returns a pointer to the destination string dest.
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
