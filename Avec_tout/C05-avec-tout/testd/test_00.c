#include <stdio.h>
#include "../ex00/ft_iterative_factorial.c"
#include "../ex01/ft_recursive_factorial.c"
#include "../ex02/ft_iterative_power.c"
#include "../ex03/ft_recursive_power.c"
#include "../ex04/ft_fibonacci.c"
#include "../ex05/ft_sqrt.c"
#include "../ex06/ft_is_prime.c"
//#include "../ex07/ft_find_next_prime.c"
// #include "../ex08/ft_ten_queens_puzzle.c"

#define INT_MAX 2147483647

void test00(int value, int expected)
{
	printf("ex00 ; ft_iterative_factorial(%d) == [%d] must [%d] \n", value, ft_iterative_factorial(value), expected);
}

void test01(int value, int expected)
{
	printf("ex01 ; ft_recursive_factorial(%d) == [%d] must [%d] \n", value, ft_recursive_factorial(value), expected);
}

void test02(int value, int power, int expected)
{
	printf("ex02 ; ft_iterative_power(%d, %d) == [%d] must [%d] \n", value, power, ft_iterative_power(value, power), expected);
}


void test03(int value, int power, int expected)
{
	printf("ex03 ; ft_recursive_power(%d, %d) == [%d] must [%d] \n", value, power, ft_recursive_power(value, power), expected);
}

void test04(int value, int expected)
{
	printf("ex04 ; ft_fibonacci(%d) == [%d] must [%d] \n", value, ft_fibonacci(value), expected);
}

void test05(int value, int expected)
{
	printf("ex05 ; ft_sqrt(%d) == [%d] must [%d] \n", value, ft_sqrt(value), expected);
}

void test06(int value, int expected)
{
	printf("ex06 ; ft_is_prime(%d) == [%d] must [%d] \n", value, ft_is_prime(value), expected);
}

/*void test07(int value, int expected)
{
	printf("ex07 ; ft_find_next_prime(%d) == [%d] must [%d] \n", value, ft_find_next_prime(value), expected);
}*/

int main()
{
	printf("\n");
	test00(-1, 0);
	test00(0, 1);
	test00(1, 1);
	test00(5, 120);
	test00(8, 40320);
	test00(10, 3628800);
	printf("\n");
	test01(-1, 0);
	test01(0, 1);
	test01(1, 1);
	test01(5, 120);
	test01(8, 40320);
	test01(8000, 0);
	printf("\n");
	test02(2, 4, 16);
	test02(3, 2, 9);
	test02(4, 3, 64);
	test02(-4, 3, -64);
	test02(0, 0, 1);
	test02(-1, -2, 0);
	printf("\n");
	test03(2, 4, 16);
	test03(3, 2, 9);
	test03(4, 3, 64);
	test03(-4, 3, -64);
	test03(0, 0, 1);
	test03(-1, -2, 0);
	printf("\n");
	test04(0, 0);
	test04(1, 1);
	test04(2, 1);
	test04(3, 2);
	test04(4, 3);
	test04(5, 5);
	test04(6, 8);
	printf("\n");
	test05(0, 0);
	test05(1, 1); 
	test05(-12, 0);
	test05(25, 5);
	test05(506250000, 0);
	printf("\n");
	test06(-1, 0);
	test06(0, 0);
	test06(1, 0);
	test06(2, 1);
	test06(3, 1);
	test06(7, 1);
	test06(18, 0);
	test06(21, 0);
	test06(2123123, 1);
    test06(23, 1);
    test06(151, 1);
	printf("\n");
	/*test07(-1, 2);
	test07(0, 2);
	test07(1, 2);
	test07(2, 2);
	test07(3, 3);
	test07(7, 7);
	test07(18, 19);
	test07(21, 23);
	test07(234, 239);
	test07(4500, 4507);*/
	return (0);	
}
