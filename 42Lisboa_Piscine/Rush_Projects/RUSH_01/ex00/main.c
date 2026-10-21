#include "header.h"

int main(int argc, char *argv[])
{
	int	i;

	{
		if (argc != 2)
		{
		ft_print_error();
		return (1);
		}
	}
	i = 0;
	while (argv[1][i])
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

