/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:59:36 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/19 09:43:11 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "./ex02/ft_strcat.c"

/* Ajoute a chaine1 le contenu de chaine2
 * Seule chaine1 change. Elle contiendra chaine2
 * chaine2 est une constante
 * retourne pointeur sur chaine1*
 * On laisse le pc determiner la taille de chaine2
 * */
int main(void)
{
    char    chaine1[100] = "Le chat mange un kayak | ";
    char    chaine2[] = "Le kayak est dans le chat";
    char    chat1[100] = "Le chat n'a plus faim | ";
    char    chat2[] = "Ou est mon kayak";
    char    vache1[100] = "Le chat est derriere tout ca | ";
    char    vache2[] = "Il n'y a rien derriere le chat";
	char	chien1[100] = "Le chat peut maintenant naviguer | ";
	char	chien2[] = "Le chat est maintenant content";

    printf("\nFONCTION MAISON\n");
    printf("test 1 :	%s\n", ft_strcat(chaine1, chaine2));
    printf("test 2 :	%s\n", ft_strcat(chat1, chat2));
    printf("test 3 :	%s\n", ft_strcat(vache1, vache2));

	// Attention a ne pas reutiliser les memes chaines que ci-dessus car elles 
	// ont ete modifiees entre deux par ma fonction home made magnifique
    printf("\nFONCTION NATIVE\n");
	printf("test 1 :	%s\n", strcat(chien1, chien2));

    return (0);
}
