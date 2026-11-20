/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:56:01 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/20 13:39:55 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_len(char *s, char c)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (c && s[i] == c)
		i++;
	return (i);
}

int	ft_has_eol(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *line, char *box, size_t len)
{
	char	*new_line;
	size_t	i;
	size_t	j;

	new_line = malloc(ft_len(line, '\0') + len + 1);
	if (!new_line)
		return (free(line), NULL);
	i = 0;
	while (line && line[i])
	{
		new_line[i] = line[i];
		i++;
	}
	j = 0;
	while (j < len)
	{
		new_line[i + j] = box[j];
		j++;
	}
	new_line[i + j] = '\0';
	return (free(line), new_line);
}

void	ft_shift(char *box, size_t start)
{
	size_t	i;

	i = 0;
	while (box[start + i])
	{
		box[i] = box[start + i];
		i++;
	}
	box[i] = '\0';
}
