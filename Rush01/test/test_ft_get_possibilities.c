#include <stdio.h>
#include "../ex00/ft_get_possibilities.c"


void test(int size)
{
	int **sudoku;
	int i, j;

	sudoku = ft_get_possibilities(size);
	for(i=0; i < ((size * (size - 1)) * 2); i++) {
		for(j=0; j < size; j++) {
			printf("%d ", sudoku[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main (void)
{
	test(4);
//	test(5);
//	test(6);	
//	test(7);
//	test(8);
//	test(9);

}
