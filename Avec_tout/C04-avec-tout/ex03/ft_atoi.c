/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:52:55 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/19 19:11:46 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// ligne 30 : -48 technique pour transformer un char en int
// if !i : si ok (car i c'est pas zero, donc c'est pas false)

// retourne 1 si espaces isspace ok
void	ft_check_if_spaces(char *str)
{
	int	i;
	int	space;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v'))
			space = 1;
		else if ((str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
			space = 1;
		i++;
	}
}

// compte le nombre de signes -
int	ft_count_minus(char *str)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	while (str[i])
	{
		if (str[i] == '-')
			minus += 1;
		i++;
	}
	return (minus);
}

int	ft_atoi(char *str)
{
	int	i;
	is_negative;

	i = 0;
	is_negative = 0;
	while (str[i])
	{
		ft_check_if_spaces(str[i]);
		if (!ft_check_if_spaces(str[i]))
			return (0);

		is_negative = (ft_count_minus(str[i]) % 2 != 0);



		str[i] = str[i] * (- 1);

	}
}
atoi
check if spaces
then
check if + -
compte les -
check si only chiffres
