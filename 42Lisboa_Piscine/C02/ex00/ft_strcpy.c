/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 18:36:44 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/09 19:45:37 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>
int main(void)
{
	char	source[] = "ABCDE";
	char	destination[6];

	int	i;
	int	j;

	i = 0;
	j = 0;

	while(source[i])
	{
		write(1, &source[i], 1);
		i++;
	}
	write(1, "\n", 1);
	
	ft_strcpy(destination, source);

	while (destination[j])
	{
		write(1, &destination[j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
*/