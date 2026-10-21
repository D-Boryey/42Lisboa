#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     *ft_range(int start, int end)
{
	size_t len;
	int *dest;
	int i;

	if (start >= end)
		return (NULL);
	len = end - start;
	dest = malloc(len * sizeof(int));
	if (!dest)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		dest[i] = start;
		start++;
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	int start = -10;
// 	int end = 10;
// 	int *dest;
// 	int i;

// 	dest = ft_range(start, end);
// 	if (!dest)
// 		return (1);
// 	i = 0;
// 	while (i <= end - start)
// 	{
// 		printf("%d ", dest[i]);
// 		i++;
// 	}
// 	write (1, "\n", 1);
// 	free(dest);
// 	dest = NULL;
// 	return (0);
// }