#include "header.h"

int ft_add(int a, int b)
{
	int add = a + b;
	printf("%d\n", add);
	return (0);
}

int ft_sub(int a, int b)
{
	int sub = a - b;
	printf("%d\n", sub);
	return (0);
}

int ft_mul(int a, int b)
{
	int mul = a * b;
	printf("%d\n", mul);
	return (0);
}

int ft_div(int a, int b)
{
	if (b == 0)
	{
		write (1, "Invalid", 7);
		return (0);
	}
	int div = a / b;
	printf("%d\n", div);
	return (0);
}

int ft_mod(int a, int b)
{
	if (b == 0)
	{
		write (1, "Invalid", 7);
		return (0);
	}
	int mod = a % b;
	printf("%d\n", mod);
	return (0);
}