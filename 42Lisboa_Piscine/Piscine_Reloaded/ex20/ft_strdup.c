/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:15:05 by dboryey           #+#    #+#             */
/*   Updated: 2026/10/19 17:15:07 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
