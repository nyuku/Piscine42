#include <stdlib.h>

int	**ft_sudoku_alloc(int size)
{
	int	**sudoku;
	int	i;
	int	j;

	i = 0;
	sudoku = malloc(size * sizeof (int*));
	if(! sudoku)
		return (sudoku);
	while (i < size)
	{
		sudoku[i] = malloc(size * sizeof (int));
		j = 0;		
		while (j < size) 
		{
			sudoku[i][j] = 0;
			j++;
		}
		i++;
	}
	return sudoku;
}