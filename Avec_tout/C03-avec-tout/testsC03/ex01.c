/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:50:56 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/09 21:31:12 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../ex01/ft_strncmp.c"

int	main(void)
{
	char	*s1 = "aaaaaa";
	char	*s2 = "aaabbb";
	int		expected0;
	int		expected1;
	int		expected2;
	int		expected3;
	int		result0;
	int		result1;
	int		result2;
	int		result3;

	expected0 = strncmp(s1, s2, (unsigned int)5);
	expected1 = strncmp(s1, s1, (unsigned int)6);
	expected2 = strncmp(s2, s1, (unsigned int)4);
	expected3 = strncmp(s1, s2, (unsigned int)3);
	result0 = ft_strncmp(s1, s2, (unsigned int)5);
	result1 = ft_strncmp(s1, s1, (unsigned int)6);
	result2 = ft_strncmp(s2, s1, (unsigned int)4);
	result3 = ft_strncmp(s2, s1, (unsigned int)3);
	printf("Expected: %d | Result: %d\n", expected0, result0);
	printf("Expected: %d | Result: %d\n", expected1, result1);
	printf("Expected: %d | Result: %d\n", expected2, result2);
	printf("Expected: %d | Result: %d\n", expected3, result3);

	return (0);
}
