/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:08:20 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/10 19:14:46 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	A;
	int	B;

	A = 10;
	B = 2;
	ft_ultimate_div_mod(&A, &B);
	printf("resultat de la division : %d\n", A);
	printf("resultat du modulo : %d", B);
	return (0);
}
