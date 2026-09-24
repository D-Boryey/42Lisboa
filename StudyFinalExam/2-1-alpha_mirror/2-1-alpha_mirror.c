#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int diff;
	char alpha_lower[] = " abcdefghijklmnopqrstuvwxyz";
	char alpha_upper[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		diff = 0;
		if (!((argv[1][i] >= 'a' && argv[1][i] <= 'z')
			|| (argv[1][i] >= 'A' && argv[1][i] <= 'Z')))
		{
			write (1, &argv[1][i], 1);
		}
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			diff = 123 - argv[1][i];
			argv[1][i] = alpha_lower[diff];
			write (1, &argv[1][i], 1);
		}
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			diff = 123 - argv[1][i];
			argv[1][i] = alpha_upper[diff];
			write (1, &argv[1][i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}