/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:46:56 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/17 14:38:32 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "ex01/ft_strncmp.c"
// compare les n premiers char des s1 et s2
int	main(void)
{
	unsigned int n = 5;
	//fonction maison
	char    egal1[100] = "lexicographiquement";
	char    egal2[100] = "lexicographiquement";
	char    plus_haut1[100] = "saluttt";
	char    plus_haut2[100] = "salut";
	char    plus_bas1[100] = "chaTon";
	char    plus_bas2[100] = "chaton";
	
	printf("\nFONCTION MAISON\n");
	printf("chaines egales %d\n", ft_strncmp(egal1, egal2, n));
	printf("char s1 plus haut en ASCII %d\n", ft_strncmp(plus_haut1, plus_haut2, n));
 	printf("char s1 plus bas en ASCII  %d\n", ft_strncmp(plus_bas1, plus_bas2, n));
 	//printf("chaine vide %s\n", ft_strcmp(vide);
 
	printf("\nFONCTION NATIVE\n");
	printf("chaines egales %d\n", strncmp(egal1, egal2, n));
	printf("char s1 plus haut en ASCII %d\n", strncmp(plus_haut1, plus_haut2, n));
	printf("char s1 plus bas en ASCII  %d\n", strncmp(plus_bas1, plus_bas2, n));

	return (0);
}
