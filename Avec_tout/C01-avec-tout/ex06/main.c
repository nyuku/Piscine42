/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:31:12 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/11 11:02:25 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "Le chat mange un kayak";

	printf("La phrase \"%s\" contient %d caracteres\n", str, ft_strlen(str));
	return (0);
}
