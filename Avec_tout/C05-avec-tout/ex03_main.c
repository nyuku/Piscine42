/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:30:29 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/22 14:59:21 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex03/ft_recursive_power.c"

int	main(void)
{
	printf("Normal : %d\n", ft_recursive_power(5, 3));
	printf("0 puissance 0 : %d\n", ft_recursive_power(0, 0));
	printf("0 puissance qqch : %d\n", ft_recursive_power(0, 4));
	printf("limite positive : %d\n", ft_recursive_power(20, 20));
	return (0);
}
