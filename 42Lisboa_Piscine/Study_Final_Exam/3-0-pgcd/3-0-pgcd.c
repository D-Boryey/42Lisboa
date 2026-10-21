#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int d;
	int argv1;
	int argv2;
	int n1;
	int n2;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	argv1 = atoi(argv[1]);
	argv2 = atoi(argv[2]);

	if (argv1 >= argv2)
	{
		n1 = argv1;
		n2 = argv2;
	}
	else
	{
		n1 = argv2;
		n2 = argv1;
	}

	d = n2;

	while (!((n1 % d == 0) && (n2 % d == 0)))
	{
		d--;
	}
	d = d + '0';
	write(1, &d, 1);
	write(1, "\n", 1);
	return (0);
}