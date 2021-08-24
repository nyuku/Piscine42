/Users/lgenevey/Documents/Rush/Rush01/ex00/main.c/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lucie_main_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:47:43 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/14 18:16:27 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_is_square.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("16	%d\n", ft_is_square(16));
	printf("0	%d\n", ft_is_square(0));
	printf("11	%d\n", ft_is_square(11));
	printf("25	%d\n", ft_is_square(25));
	return (0);
}
