/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 19:25:37 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/09 19:45:43 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	char	src[] = "######";
	char	dest[] = "ABCDEF";
	int n = 3;

	printf("%s\n", src);
	write(1, "\n", 1);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	write(1, "\n", 1);
	return (0);
}
*/