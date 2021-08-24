/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:47:10 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/13 15:26:47 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	source[10] = "01234";
	char	destination[15] = "";
	unsigned int	nbr_char_a_copier;
	
	nbr_char_a_copier = 9;
	printf("Avec vrai strncpy :	%s\n", strncpy(destination, source, nbr_char_a_copier));
	printf("Avec ft_strncpy :	%s\n", ft_strncpy(destination, source, nbr_char_a_copier));

	return (0);
}
