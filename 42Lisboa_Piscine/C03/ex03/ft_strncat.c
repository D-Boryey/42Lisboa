/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:01:01 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/15 09:34:48 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <unistd.h>
int main(void)
{
	char	src[] = "WORLD!";
	char	dest[] = "HELLO ";
	int	i;
	int	nb = 3;

	ft_strncat(dest, src, nb);
	i = 0;
	while (dest[i])
	{
		write (1, &dest[i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
*/