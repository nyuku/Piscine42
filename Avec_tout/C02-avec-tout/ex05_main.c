/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 22:02:32 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/13 11:22:10 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex05/ft_str_is_uppercase.c"

int ft_str_is_uppercase(char *str);

int main(void)
{
	char	only_upper[100] = "ONLYUPPER";
	char	only_lower[100] = "onlylower";
	char	mixed[100] = "OdsfjkladfJLDFDH";
	char	empty[1] = "";

	printf("Doit afficher 1 only upper	%d\n", ft_str_is_uppercase(only_upper));
	printf("Doit afficher 0 only lower	%d\n", ft_str_is_uppercase(only_lower));
	printf("Doit afficher 0 maj et min mix	%d\n", ft_str_is_uppercase(mixed));
	printf("Doit afficher 1 chaine vide	%d\n", ft_str_is_uppercase(empty));
	return (0);
}
