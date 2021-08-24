#include <stdio.h>
#include <stdlib.h>
#include "../ex00/ft_atoi.c"


void test(char* s, int expected)
{
	int c;
	c = ft_atoi(s);
	printf("count_char(%s) = [%d] expected [%d]\n", s, c, expected);
}

int main (void)
{
	test("1234", 1234);	
	test("1 2 3 4 5", 12);	
	test("1", 1);	
	test("", 0);	
	test("xxx", 0);	
}
