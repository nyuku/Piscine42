#include <unistd.h>

void	ft_print_sudoku(int size, int **sudoku)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = sudoku[i][j] + '0';
			write(1, &c, 1);
			if (j < (size - 1))
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
