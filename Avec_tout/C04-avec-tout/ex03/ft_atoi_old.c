/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:52:55 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/19 12:36:53 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// je compte les signes negatifs (45) et si modulo count_negative != 0 alors
// ajouter le signe - devant la string entree
// ligne 30 : -48 technique pour transformer un char en int
// if !i :
#include <unistd.h>

void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	count_negative;
	int	atoied;

	i = 0;
	atoied = -1;
	count_negative = 0;
	if(
	while(str[i])
	{
		if (str[i] == 45)
			count_negative += 1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (!i)
				atoied  = str[i] - 48;
			else
			{
				atoied = atoied * 10;
				atoied = atoied + (str[i] - 48);
			}
		}
		i++;
	}
	if (count_negative % 2 != 0)
		 atoied = atoied * -1;
	return (atoied);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
