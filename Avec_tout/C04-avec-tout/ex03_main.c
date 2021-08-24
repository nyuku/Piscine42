/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:52:13 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/19 12:50:13 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "./ex03/ft_atoi.c"

int	main(void)
{
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));
	//printf("Fonction native:	%d", atoi(nb));
	return (0);
}
