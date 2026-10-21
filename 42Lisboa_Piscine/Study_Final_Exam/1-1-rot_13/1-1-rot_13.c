#include <unistd.h>
int main(int argc, char *argv[])
{
	int i;
	int rem;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			rem = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] += 13;
			else
			{
				rem = (13 - ('z' - argv[1][i] + 1));
				argv[1][i] = 'a' + rem;
			}
		}
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			rem = 0;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] += 13;
			else
			{
				rem = (13 - ('Z' - argv[1][i] + 1));
				argv[1][i] = 'A' + rem;
			}
		}
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
}