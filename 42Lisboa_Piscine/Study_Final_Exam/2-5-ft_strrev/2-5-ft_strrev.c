char    *ft_strrev(char *str)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j--;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

// #include <unistd.h>
// int main(void)
// {
// 	char str[] = "hello World!";
// 	int i;

// 	i = 0;
// 	ft_strrev(str);
// 	while (str[i])
// 	{
// 		write (1, &str[i], 1);
// 		i++;
// 	}
// 	return (0);
// }