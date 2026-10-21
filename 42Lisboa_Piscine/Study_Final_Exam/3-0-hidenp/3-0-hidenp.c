#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	unsigned char match[256] = {0};
	
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i] && argv[2][j])
	{
		if (argv[1][i] == argv[2][j])
		{
			match[i] = argv[1][i];
			i++;
		}
		j++;
	}
	match[i] = '\0';
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] != match[i])
		{
			write(1, "0", 1);
			write (1, "\n", 1);
			return (0);
		}
		i++;
	}
	write (1, "1", 1);
	write (1, "\n", 1);
	return (0);
}