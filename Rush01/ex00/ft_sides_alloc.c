/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_sides.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 14:59:58 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/14 19:02:56 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// *tab_sides[4]; tableau qui contient 4 adresses. Correspond aux 4 cotes.
// allouer de l'espace pour chaque index
// tab_sides[i] = malloc(number_of_sides * sizeof(int)); 
int	**ft_sides_alloc(int number_of_sides)
{
	int	**tab_sides;
	int	i;

	i = 0;
	tab_sides = malloc(4 * sizeof (int*));
	while (i < 4)
	{
		tab_sides[i] = malloc(number_of_sides * sizeof (int));
		i++;
	}
	return (tab_sides);
}
