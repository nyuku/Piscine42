/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:51:24 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/17 21:45:20 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * rechercher une chaine dans une autre
 * renvoie un pointeur avec la trouvaille si ok
 * renvoie NULL si rien trouve
 * char *to_find : chaine a rechercher
 * char *str	 : chaine qu'on veut analyser
 * */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while ((str[j] == to_find[i]) || (str[i] == 0) || (to_find == 0))
		{
			i++;
			j++;
		}
		if (to_find[j] == 0)
			return (str[i - j]);
		else

	}
}
