/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:45:22 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/25 19:00:07 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc != 1)
		write(1, "a", 1);
		write(1, "\n", 1);
		return (0);
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == 'a')
			{
				write(1, "a", 1);
				write(1, "\n", 1);
				return (0);
			}
			else
			{
				write(1, "\n", 1);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}
