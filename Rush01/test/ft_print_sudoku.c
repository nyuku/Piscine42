#include "../ex00/ft_print_sudoku.c"
#include "../ex00/ft_sudoku_alloc.c"

int main (void)
{
	int **sudoku;

	sudoku = ft_sudoku_alloc(4);
	ft_print_sudoku(4, sudoku);

}
