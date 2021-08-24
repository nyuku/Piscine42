/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:19:23 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/16 13:48:07 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "./ex07/ft_strupcase.c"

int	main(void)
{
	char	minus[50] = "tout en minuscule";
	char	minus_and_maj[50] = "MIN et maj";
	char	special[50] = "$Le chat e$t m0rt";
	char	vide[1] = "";

	printf("Tout en minuscule %s\n",ft_strupcase(minus));
	printf("Min et maj %s\n", ft_strupcase(minus_and_maj));
	printf("special %s\n", ft_strupcase(special));
	printf("chaine vide:	%s\n", ft_strupcase(vide));
	return (0);
}
