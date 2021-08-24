/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:49:27 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/16 14:07:18 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "./ex08/ft_strlowcase.c"

int	main(void)
{
	char	majuscule[42] = "INSHALLAH CA PASSE ELLE DIT NADIA";
	char	minuscule_maj[42] = "Ca DepenD WallaHH";
	char	special[42] = "#*($&^%";
	char	vide[42] = "";

	printf("Tout doit etre en minuscule	%s\n", ft_strlowcase(majuscule));
	printf("Certaines lettres seulement	%s\n", ft_strlowcase(minuscule_maj));
	printf("Special char	%s\n", ft_strlowcase(special));
	printf("chaine vide	%s\n", ft_strlowcase(vide));
	return (0);
}
