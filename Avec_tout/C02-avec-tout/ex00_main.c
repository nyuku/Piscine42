/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:11:43 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/16 11:36:15 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "./ex00/ft_strcpy.c"

//int 	combien_de_car(char *str);

int	main(void)
{
	char	source[100] = "le kayak est dans le chat";
	char	destination[100] = "01234567890123456789012345678901234567890123456789";

	//combien_de_car(destination);
	printf("Vrai strcpy : %s\n", strcpy(destination, source));
	printf("Home made ft_strcpy : %s\n", ft_strcpy(destination, source));
	//combien_de_car(destination);
	//printf("nbr de car dans source :	%d\n", combien_de_car(source));
	//printf("nbr de car dans destination :	%d\n", combien_de_car(destination));
	return (0);
}


