/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:30:26 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/23 11:12:47 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	char	*sorted[100];

	i = argc - 1;
	while (argv[i] > 0)
	{
		j = 0;
		while (argv[i][j] && argv)
		{

			j++;
		}
		i++; // on passe au mot suivant
	}
	return (0);
}
trier les arguments par ordre ascii
check l'index de chaque param
celui qui est le plus grand est mis en premier

>> on parcours les arguments et on detecte des qu'il y a une difference 
>> on fait la difference du caractere

