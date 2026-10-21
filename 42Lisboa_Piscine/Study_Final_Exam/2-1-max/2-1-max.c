int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

// #include <stdio.h>
// int main(void)
// {
// 	int tab[] = {81, 15, 40, 29, 90, 28, 4, 22, 72, 78};

// 	printf("%d\n", max(tab, 10));
// 	return (0);
// }