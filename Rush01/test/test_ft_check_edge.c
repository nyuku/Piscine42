#include <stdio.h>
#include <stdlib.h>
#include "../ex00/ft_check_edge.c"


void test_valid()
{
	int **disp;
	int i, j;

	disp = malloc(4 * sizeof(int*));
	for(i=0; i<4; i++) {
		disp[i] = malloc(4 * sizeof(int));
		for(j=0;j<4;j++) {
			disp[i][j] = i + 1;
		}
	}
	
	printf("ft_check_edge(4, edge) = [%d] expected [1]\n", ft_check_edge(4, disp));
}

void test_invalid()
{
	int **disp;
	int i, j;

	disp = malloc(4 * sizeof(int*));
	for(i=0; i<4; i++) {
		disp[i] = malloc(4 * sizeof(int));
		for(j=0;j<4;j++) {
			disp[i][j] = i + j;
		}
	}
	printf("ft_check_edge(4, edge) = [%d] expected [0]\n", ft_check_edge(4, disp));
}

int main (void)
{
	test_valid();
	test_invalid();
}
