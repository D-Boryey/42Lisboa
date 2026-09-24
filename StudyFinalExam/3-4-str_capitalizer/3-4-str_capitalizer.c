#include <unistd.h>

int main(int ac, char *av[])
{
	int i;
	int j;

	if (ac <= 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'A' && av[i][j] <= 'Z')
				av[i][j] += 32;
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][0] >= 'a' && av[i][0] <= 'z')
			{
				av[i][0] -= 32;
				write (1, &av[i][0], 1);
				j++;
			}
			if ((av[i][j] == 32 || av[i][j] == 9) && av[i][j + 1])
			{
				write (1, &av[i][j], 1);
				j++;
			}
			if ((av[i][j] >= 'a' && av[i][j] <= 'z') && (av[i][j - 1] == 32 || av[i][j - 1] == 9))
			{
				av[i][j] -= 32;
				write (1, &av[i][j], 1);
			}
			else
				write (1, &av[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}