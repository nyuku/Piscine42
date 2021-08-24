/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:06:38 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/10 19:40:25 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex03/ft_strncat.c"

int	main(void)
{
	char	*expected;
	char	*result;
	char	s1[42] = "test";
	char	*s2 = "bonjour";
	char	s3[42] = "test";
	char	*s4 = "bonjour";

	expected = strncat(s1, s2, 3);
	result = ft_strncat(s3, s4, 3);
	printf("Expected: %s | result: %s\n", expected, result);
	return (0);
}
