#include <unistd.h>
int	find_index(char c)
{
	char alpha_lower[] = " abcdefghijklmnopqrstuvwxyz";
	char alpha_upper[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		while (alpha_lower[i] <= c)
		{
			i++;
		}
		return (i);
	}
	if (c >= 'A' && c <= 'Z')
	{
		while (alpha_upper[i] <= c)
		{
			i++;
		}
		return (i);
	}
	else
		return (1);
}

int main(int argc, char *argv[])
{
	int i;
	int times;

	times = 0;
	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		times = find_index(argv[1][i]);
		if (times == 1)
			write (1, &argv[1][i], 1);
		while(times > 1)
		{
			write (1, &argv[1][i], 1);
			times--;
		}
		i++;
	}
	write (1, "\n", 1);
}