/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:56:30 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/24 19:18:52 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_strlen(int *str);

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	i;
	int	j;

	int_array = (int*)malloc(sizeof(int) * (ft_strlen(int_array)));
	if (int_array == NULL)
		return (NULL);
	if (min > max) // si min plus grand que max retour pointeur null
		return (NULL);
	i = min;
	j = 0;
	while(i < max) // on met dans le tableau les valeurs de min a max non inclu
	{
		int_array[j] = i;
		j++;
		i++;
	}
	return (int_array);
}

int	ft_strlen(int *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

