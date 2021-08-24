/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:59:06 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/22 16:15:03 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "./ex04/ft_fibonacci.c"

int	main(void)
{
	printf("result %d\n", ft_fibonacci(6));
	printf("result %d\n", ft_fibonacci(8));
	return (0);
}
