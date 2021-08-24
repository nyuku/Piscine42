/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:10:52 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/17 21:30:24 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "./ex03/ft_strncat.c"

int	main(void)
{
	int unsigned	nb = 10;
    char    chaine1[100] = "Le chat mange un kayak | ";
    char    chaine2[] = "Le kayak est dans le chat";
    char    chat1[100] = "Le chat n'a plus faim | ";
    char    chat2[] = "Ou est mon kayak";
    char    vache1[100] = "Le chat est derriere tout ca | ";
    char    vache2[] = "Il n'y a rien derriere le chat";
    char    chien1[100] = "Le chat peut maintenant naviguer | ";
    char    chien2[] = "Le chat est maintenant content";

    printf("\nFONCTION MAISON\n");
    printf("test 1 :    %s\n", ft_strncat(chaine1, chaine2, nb));
    printf("test 2 :    %s\n", ft_strncat(chat1, chat2, nb));
    printf("test 3 :    %s\n", ft_strncat(vache1, vache2, nb));

    // Attention a ne pas reutiliser les memes chaines que ci-dessus car elles
    // ont ete modifiees entre deux par ma fonction home made magnifique
    printf("\nFONCTION NATIVE\n");
    printf("test 1 :    %s\n", strncat(chien1, chien2, nb));
	return (0);
}
