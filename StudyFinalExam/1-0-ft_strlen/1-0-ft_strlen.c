int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "Hello World!";

// 	printf("%d\n", ft_strlen(str));
// 	return (0);
// }