/* ************************************************************************** */
/*                                                                            */

/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:05:42 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/17 11:44:52 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcmp.c"
int	main(void)
{
	//fonction maison
	char	egal1[100] = "w";
	char	egal2[100] = "w";
	char	plus_haut1[100] = "v";
	char	plus_haut2[100] = "5";
	char	plus_bas1[100] = "a";
	char	plus_bas2[100] = "u";
	//char	vide[1] = "";

	printf("\nFONCTION MAISON\n");
	printf("chaines egales %d\n", ft_strcmp(egal1, egal2));
	printf("char s1 plus haut en ASCII %d\n", ft_strcmp(plus_haut1, plus_haut2));
	printf("char s1 plus bas en ASCII  %d\n", ft_strcmp(plus_bas1, plus_bas2));
	//printf("chaine vide %s\n", ft_strcmp(vide);
	

	printf("\nFONCTION NATIVE\n");
	printf("chaines egales %d\n", strcmp(egal1, egal2));
	printf("char s1 plus haut en ASCII %d\n", strcmp(plus_haut1, plus_haut2));
	printf("char s1 plus bas en ASCII  %d\n", strcmp(plus_bas1, plus_bas2));
	return (0);
}
