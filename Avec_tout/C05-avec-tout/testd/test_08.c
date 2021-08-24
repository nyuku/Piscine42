#include <stdio.h>
#include "../ex08/ft_ten_queens_puzzle.c"

#define INT_MAX 2147483647

void test08()
{
	int t;

	printf("ex08 \n");
	t = ft_ten_queens_puzzle();
	printf("total : %d\n", t);
}

int main()
{
	test08();
	return (0);	
}
