int	    is_power_of_2(unsigned int n)
{
	unsigned int nb;

	nb = 1;
	if (n <= 1)
		return (0);
	if (nb > n / 2)
		return (0);
	while (nb < n)
	{
		if (nb > n / 2)
			return (0);
		nb *= 2;
	}
	if (nb == n)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", is_power_of_2(64));
// 	printf("%d\n", is_power_of_2(43));
// 	printf("%d\n", is_power_of_2(12));
// 	printf("%d\n", is_power_of_2(63));
// 	printf("%d\n", is_power_of_2(108));
// 	printf("%d\n", is_power_of_2(32));
// 	printf("%d\n", is_power_of_2(3));
// 	printf("%d\n", is_power_of_2(4));
// 	printf("%d\n", is_power_of_2(60));
// 	printf("%d\n", is_power_of_2(-64));
// 	printf("%d\n", is_power_of_2(0));
// }