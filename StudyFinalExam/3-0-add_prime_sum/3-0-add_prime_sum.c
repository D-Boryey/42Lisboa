#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int num;
	
	num = 0;
	sign = 1;
	i = 0;
	while (str[i])
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + (str[i] - '0');
			if (!(((str[i + 1] >= '0') && (str[i + 1] <= '9'))))
				return (num * sign);
			i++;
		}
	}
	return (num * sign);
}

void ft_putnbr(int nb)
{
	long int n = nb;

	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int is_prime(int i)
{
	int j;

	if (i < 2)
		return (0);
	j = 2;
	while (j <= i / j)
	{
		if (i % j == 0)
			return (0);
		j++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int i;
	int n;
	int sum;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = ft_atoi(argv[1]);
	sum = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
	return (0);
}