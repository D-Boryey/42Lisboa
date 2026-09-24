#include <unistd.h>

void ft_base(int n)
{
	int i;
	char base[] = "0123456789abcdef";
	char box[32];

	i = 0;
	while (n > 0)
	{
		box[i] = base[n % 16];
		n = n / 16;
		i++;
	}
	while (--i >= 0)
	{
		write (1, &box[i], 1);
	}
}

int main(int argc, char *argv[])
{
	int i;
	int n;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}

	n = 0;
	i = 0;
	while (argv[1][i])
	{
		n = (n * 10) + (argv[1][i] - '0');
		i++;
	}
	
	ft_base(n);
	write (1, "\n", 1);
	return (0);
}