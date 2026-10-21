#include <unistd.h>

int ft_atoi(char *str)
{
	int n;
	int i;

	i = 0;
	n = 0;
	while (str[i])
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr (n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int main(int argc, char *argv[])
{
	int i;
	int n;
	int res;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	
	n = ft_atoi(argv[1]);
	i = 1;
	while (i <= 9)
	{
		res = n * i;
		ft_putchar(i + '0');
		write (1, " ", 1);
		write (1, "x", 1);
		write (1, " ", 1);
		ft_putnbr (n);
		write (1, " ", 1);
		write (1, "=", 1);
		write (1, " ", 1);
		ft_putnbr(res);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}