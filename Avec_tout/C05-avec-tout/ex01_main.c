/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:14:46 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/24 11:52:29 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex01/ft_recursive_factorial.c"

int	main(void)
{
printf("Result : %d", ft_recursive_factorial(10));
	return (0);
}
