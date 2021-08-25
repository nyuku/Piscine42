/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:24:50 by lgenevey          #+#    #+#             */
/*   Updated: 2021/08/08 19:07:33 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x_max,	int y_max)
{
	int	x;
	int	y;

	x = 0;
	while (x < y_max)
	{
		y = 0;
		while (y < x_max)
		{
			if ((x == 0 && y == 0) || (x == 0 && y == (x_max - 1)) || (x == (y_max - 1 ) && y == 0) || (x == (y_max - 1 ) && y == (x_max - 1 )))
				ft_putchar('o');
			else if (y == 0 || y == (x_max - 1 ))
				ft_putchar('|');
			else if (x == 0 || x == (y_max - 1 ))
				ft_putchar('-');
			else
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
		y = 0;
	}
}
