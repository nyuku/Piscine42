#include <stdlib.h>

void	ft_sudoku_free(int size, int **sudoku)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(sudoku[i++]);
	}
	free(sudoku);
}