#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char    *ft_strdup(char *src)
{
	int i;
	char *copy;

	i = 0;
	if (!src[i])
		return (NULL);
	copy = malloc(ft_strlen(src) + 1);
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// int main(void)
// {
// 	char *src = {"Hello World!"};
// 	char *copy = ft_strdup(src);
// 	printf("%s\n", src);
// 	copy[0] = 'J';
// 	printf("%s\n", copy);
// 	free(copy);
// 	return (0);
// }