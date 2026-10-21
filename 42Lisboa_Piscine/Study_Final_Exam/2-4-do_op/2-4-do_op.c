#include "header.h"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	if (argv[2][0] == '+')
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		ft_add (a, b);
	}
	if (argv[2][0] == '-')
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		ft_sub (a, b);
	}
	if (argv[2][0] == '*')
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		ft_mul (a, b);
	}
	if (argv[2][0] == '/')
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		ft_div (a, b);
	}
	if (argv[2][0] == '%')
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		ft_mod (a, b);
	}
	return (0);
}