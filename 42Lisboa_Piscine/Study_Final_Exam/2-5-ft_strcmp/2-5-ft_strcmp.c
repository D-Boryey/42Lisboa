int    ft_strcmp(char *s1, char *s2)
{
	int i;
	int dif;

	dif = 0;
	i = 0;
	while (s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			return (dif);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "Hello A";
// 	char s2[] = "Hello B";

// 	printf("%d\n", ft_strcmp(s1, s2));
// 	return (0);
// }