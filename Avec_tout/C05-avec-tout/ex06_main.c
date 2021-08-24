/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:34:00 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/22 23:40:57 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex06/ft_is_prime.c"
#include <stdio.h>

int	main(void)
{
	printf("1 si premier | 0 si pas premier\n");
	printf("zero	:	%d\n", ft_is_prime(0));
	printf("1	:	%d\n", ft_is_prime(1));
	printf("2	:	%d\n", ft_is_prime(2));
	printf("-5	:	%d\n", ft_is_prime(-5));
	printf("13	:	%d\n", ft_is_prime(13));
	printf("67	:	%d\n", ft_is_prime(67));
	printf("9	:	%d\n", ft_is_prime(9));
	return (0);
}
