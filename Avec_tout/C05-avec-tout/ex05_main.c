/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:21:12 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/24 20:44:43 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex05/ft_sqrt.c"
#include <stdio.h>

int	main(void)
{
	printf("Racine carree ok    %d\n", ft_sqrt(25));
	printf("Racine carree de 13 %d\n", ft_sqrt(13));
	printf("Racine carree nombre negatif	%d\n", ft_sqrt(-5));
	printf("Racine carree de 0  %d\n", ft_sqrt(0));
    printf("Racine carree de 12250000    %d\n", ft_sqrt(12250000));
    printf("Racine carree de 41209    %d\n", ft_sqrt(41209));
    printf("Racine carree de 2147483647    %d\n", ft_sqrt(2147483647));
	printf("sqrt of %d is %d\n", -189, ft_sqrt(-189));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 314920516, ft_sqrt(314920516));
	printf("sqrt of %d is %d\n", 1085301626, ft_sqrt(1085301626));
	printf("sqrt of %d is %d\n", 304258249, ft_sqrt(304258249));
	printf("sqrt of %d is %d\n", 482449002, ft_sqrt(482449002));
	printf("sqrt of %d is %d\n", 1508157225, ft_sqrt(1508157225));
	printf("sqrt of %d is %d\n", 1203666971, ft_sqrt(1203666971));
	printf("sqrt of %d is %d\n", 1576248804, ft_sqrt(1576248804));
	printf("sqrt of %d is %d\n", 781579541, ft_sqrt(781579541));
	printf("sqrt of %d is %d\n", 378497025, ft_sqrt(378497025));
	printf("sqrt of %d is %d\n", 1861467902, ft_sqrt(1861467902));
	return (0);
}
