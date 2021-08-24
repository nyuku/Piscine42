/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:40:30 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/10 12:54:08 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../ex02/ft_strcat.c"

int	main(void)
{
	char	s1[42] = "test";
	char	*s2 = "bonjour";
	char	*s4 = "bonjour";
	char	s3[42] = "test";
	char	*expected;
	char	*result;

	expected = strcat(s1, s2);
	result = ft_strcat(s3, s4);
	printf("Expected: %s | Result: %s\n", expected, result);
}
