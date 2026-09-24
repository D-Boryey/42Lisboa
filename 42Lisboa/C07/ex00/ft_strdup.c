/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:05:56 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/19 12:53:28 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	size_t	length;
	size_t	i;
	char	*copy;

	i = 0;
	length = 0;
	if (src == NULL)
		return (NULL);
	while (src[length])
	{
		length++;
	}
	copy = malloc(length + 1);
	if (copy == NULL)
		return (NULL);
	while (i < length)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
int main(void) {
	char	src[] = "Hello, world!";
	char *copy = ft_strdup(src);

	printf("Original:  %s\n", src);
	printf("Duplicate: %s\n", copy);
	copy[0] = 'J';
	printf("Modified duplicate: %s\n", copy);
	printf("Original unchanged: %s\n", src);

	free(copy);
	copy = NULL;
	return 0;
}
*/