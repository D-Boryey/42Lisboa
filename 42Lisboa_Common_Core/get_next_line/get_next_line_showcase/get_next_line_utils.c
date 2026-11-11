/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:30:00 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/11 15:30:00 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_has_eol(const char *box, char c)
{
	int	i;

	if (!box)
		return (NULL);
	i = 0;
	while (box[i])
	{
		if (box[i] == c)
			return ((char *)&box[i]);
		i++;
	}
	return (NULL);
}

char	*ft_merge(char *box, const char *buf, ssize_t len)
{
	size_t	i;
	size_t	box_len;
	char	*new_box;

	if (!buf || len <= 0)
		return (box);
	box_len = 0;
	while (box && box[box_len])
		box_len++;
	new_box = malloc(box_len + len + 1);
	if (!new_box)
		return (free(box), NULL);
	i = 0;
	while (i < box_len + (size_t)len)
	{
		if (i < box_len)
			new_box[i] = box[i];
		else
			new_box[i] = buf[i - box_len];
		i++;
	}
	new_box[i] = '\0';
	return (free(box), new_box);
}

char	*ft_get_line(const char *box)
{
	size_t	i;
	char	*line;

	i = 0;
	while (box[i] && box[i] != '\n')
		i++;
	if (box[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	line[i] = '\0';
	while (i > 0)
	{
		i--;
		line[i] = box[i];
	}
	return (line);
}

char	*ft_update_box(char *box)
{
	size_t	i;
	size_t	j;
	char	*new_box;

	i = 0;
	while (box[i] && box[i] != '\n')
		i++;
	if (!box[i])
		return (free(box), NULL);
	i++;
	j = i;
	while (box[j])
		j++;
	new_box = malloc(j - i + 1);
	if (!new_box)
		return (free(box), NULL);
	j = 0;
	while (box[i])
		new_box[j++] = box[i++];
	new_box[j] = '\0';
	return (free(box), new_box);
}

ssize_t	ft_read_box(int fd, char *buf, char **box)
{
	ssize_t	r_bytes;

	r_bytes = read(fd, buf, BUFFER_SIZE);
	if (r_bytes > 0)
	{
		buf[r_bytes] = '\0';
		*box = ft_merge(*box, buf, r_bytes);
		if (!*box)
			return (-1);
	}
	return (r_bytes);
}
