/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:32:13 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/09 19:46:38 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../ex00/ft_strcmp.c"

int	main(void)
{
	char	*s1 = "bbb";
	char	*s2 = "aaa";

	int	result0;
	int	result1;
	int	result2;
	int output0;
	int output1;
	int output2;
	
	result0 = strcmp(s1, s2);
	result1 = strcmp(s1, s1);
	result2 = strcmp(s2, s1);

	output0 = ft_strcmp(s1, s2);
	output1 = ft_strcmp(s1, s1);
	output2 = ft_strcmp(s2, s1);

	printf("Expected: %d | Result: %d\n", result0, output0);
	printf("Expected: %d | Result: %d\n", result1, output1);
	printf("Expected: %d | Result: %d\n", result2, output2);
	return (0);
}
