/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:52:07 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/21 19:13:47 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./ex00/ft_iterative_factorial.c"
#include <stdio.h>
int	main(void)
{
	printf("result : %d", ft_iterative_factorial(5));
	return (0);
}
