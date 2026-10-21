int	ft_atoi_base(const char *str, int str_base)
{
	int		result;
	int		sign;
	int		digit;
	int		valid;

	result = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	valid = 1;
	while (*str && valid)
	{
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			digit = *str - 'A' + 10;
		else
			digit = str_base;
		if (digit >= str_base)
			valid = 0;
		else
		{
			result = result * str_base + digit;
			str++;
		}
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
	return (0);
}