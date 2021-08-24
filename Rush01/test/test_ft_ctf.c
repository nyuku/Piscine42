#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../ex00/ft_ctf.c"
#include "../ex00/ft_sides_alloc.c"
#include "../ex00/ft_atoi.c"

void test(char* s, int edge_size)
{
	int i, j;
	;
	char buffer[512];

	strcpy(buffer, s);
	
	printf("allocation \n");	

	int	**edge = ft_sides_alloc(edge_size);
	
	printf("analzse de la chaine \n");	
	
	ft_ctf(buffer, edge_size, edge);

	printf("impression \n");	

	for(i=0; i < 4; i++) {
		for(j=0; j < edge_size; j++) {
			printf("%02d ", edge[i][j]);
		}
		printf("\n");
	}
}

int main (void)
{
	test("1 2 3 4 5 6 3 4 5 3 4 5", 3);	
	test("1 2 3 4 5 6 3 4 5 3 4 5 3 4 5 6", 4);	

}
