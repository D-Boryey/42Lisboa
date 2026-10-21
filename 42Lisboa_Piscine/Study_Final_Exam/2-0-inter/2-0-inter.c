#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	unsigned char dup[256] = {0};

	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j] && !dup[(unsigned char)argv[1][i]])
			{
				write (1, &argv[1][i], 1);
				dup[(unsigned char)argv[1][i]] = 1;
			}
			j++;
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}