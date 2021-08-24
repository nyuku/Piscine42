/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:36:26 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/16 12:19:07 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex06/ft_str_is_printable.c"

int	main(void)
{
	int result;

    result = ft_str_is_printable("asdf");
    printf("Result minuscules:	%d\n", result);

    result = ft_str_is_printable("QWERTY");
    printf("Result majuscules:	%d\n", result);

    result = ft_str_is_printable("asd f1234~");
    printf("Result min space  chiffes tilde:	%d\n", result);

    result = ft_str_is_printable("999");
    printf("Result chiffres:	%d\n", result);

    result = ft_str_is_printable("#$+ we 57");
    printf("Result special min chiffre:	%d\n", result);

    result = ft_str_is_printable("");
    printf("Result chaine vide:	%d\n", result);
	return (0);
}
