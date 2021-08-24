/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:56:40 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/24 18:59:36 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "./ex01/ft_range.c"

int	main(void)
{
	int	*tableau;
	int	i;

	i = 0;
	tableau = ft_range(-15, 20);
	while(i < 35)
	{
		printf("%d ", tableau[i]);
		i++;
	}
	return(0);
}
