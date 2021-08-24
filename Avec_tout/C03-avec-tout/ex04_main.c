/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:51:40 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/17 21:45:26 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "./ex04/ft_strstr.c"

int	main(void)
{
	char	phrase[50] = "Je devienne fou !";
	char	rechercher[50] = "fou";

	printf("\nFONCTION HOME MADE\n");
	printf("happy path	%s\n", ft_strstr(phrase, rechercher));
	printf("rechercher vide dans vide	%s\n", ft_strstr("", ""));
	printf("rechercher a dans chaine vide 	%s\n", ft_strstr("", "a"));
	printf("recherche non fructueuse	%s\n", ft_strstr("Le chat", "marcher"));
	printf("recherche Abcd dans AbcAbcdAbcde	%s\n", ft_strstr("AbcAbcdAbcde", "Abcd"));
	
	printf("\nFONCTION NATIVE\n");
	printf("happy path	%s\n", strstr("Je devienne fou !", "fou"));
	printf("rechercher vide dans vide	%s\n", strstr("", ""));
	printf("rechercher a dans chaine vide 	%s\n", strstr("", "a"));
	printf("recherche non fructueuse	%s\n", strstr("Le chat", "marcher"));
	printf("recherche Abcd dans AbcAbcdAbcde	%s\n", strstr("AbcAbcdAbcde", "Abcd"));
	
	return (0);
}
