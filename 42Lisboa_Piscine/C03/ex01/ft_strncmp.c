/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:00:58 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/15 09:26:09 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char	*s1 = "12345Afff";
	char	*s2 = "12345Zfff";
	unsigned int	n = 6;
	
	printf("Difference: %d", ft_strncmp(s1, s2, n));
}
*/