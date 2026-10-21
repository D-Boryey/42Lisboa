/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:01:00 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/15 09:27:07 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
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

	ft_strcat(dest, src);
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