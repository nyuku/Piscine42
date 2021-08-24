/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:30:40 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/23 21:43:17 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "./ex07/ft_find_next_prime.c"

int	main(void)
{
	printf("nb indique 5 : prochain nb premier : %d\n", ft_find_next_prime(5));
	printf("nb indique 7 : prochain nb premier : %d\n", ft_find_next_prime(7));
	printf("nb indique 13 : prochain nb premier : %d\n", ft_find_next_prime(13));
	return (0);
}
