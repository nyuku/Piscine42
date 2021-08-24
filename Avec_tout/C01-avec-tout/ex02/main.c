/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:20:15 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/10 19:44:24 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int	A;
	int	B;

	A = 42;
	B = 12;
	ft_swap(&A, &B);
	printf("nouvelle valeur de A : %d\n", A);
	printf("nouvelle valeur de B : %d\n", B);
	return (0);
}
