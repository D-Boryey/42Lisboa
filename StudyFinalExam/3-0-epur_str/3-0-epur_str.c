#include <unistd.h>

int main(int argc, char* argv[])
{
	int i;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == 9)
			argv[1][i] = 32;
		i++;
	}
	i = 0;
	int j;
	while (argv[1][i])
	{
		while (argv[1][i] == 32 && argv[1][i])
			i++;
		while (argv[1][i] != 32 && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		j = 0;
		while (argv[1][i + j] == 32)
		{
			j++;
			if (!argv[1][i + j])
				i += j;
		}
		if (argv[1][i] == '\0')
		{
			write (1, "\n", 1);
			return (0);
		}
		else
		{
			write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}