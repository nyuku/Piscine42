/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:15:33 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/10 19:19:36 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int A;
    int B;
    int division;
    int modulo;

    A = 10;
    B = 3;
    division = 0;
    modulo = 0;
    ft_div_mod(A, B, &division, &modulo);
    printf("resultat de la division : %d\n", division);
    printf("reste de la division : %d\n", modulo);
    return (0);
}
