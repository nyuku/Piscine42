#include <stdio.h>
#include <stdlib.h>
#include "../ex00/count_char.c"


void test(char* s, int expected)
{
	int c;
	c = count_char(s);
	printf("count_char(%s) = [%d] expected [%d]\n", s, c, expected);
}

int main (void)
{
	test("1234 234 1 3", 4);	
	test("1 1 3", 3);	
	test("", 0);	
	test("12$34 234 1 3", 1);	
}
