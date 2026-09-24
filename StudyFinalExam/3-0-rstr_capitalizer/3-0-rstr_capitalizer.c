#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 1)
	{
		write (1, "\n", 1);
		return (0);
	}

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
		{
			if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
				argv[j][i] += 32;
			if ((argv[j][i + 1] == 32 || argv[j][i + 1] == 9 || argv[j][i] == 10 || argv[j][i + 1] == '\0')
				&& (argv[j][i] >= 'a' && argv[j][i] <= 'z'))
			{
				argv[j][i] -= 32;
			}
			write (1, &argv[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		i = 0;
		j++;
	}
	return (0);
}