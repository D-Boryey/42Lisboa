/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:55:27 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/13 12:04:49 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_has_eol(const char *box, char c)
{
	int	i;

	i = 0;
	if (!box)
		return (0);
	while (box[i])
	{
		if (box[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_merge(char *box, const char *buf, ssize_t len)
{
	char	*new_box;
	int		box_len;
	int		i;

	box_len = 0;
	if (box)
		while (box[box_len])
			box_len++;
	new_box = malloc((box_len + len + 1) * sizeof(char));
	if (!new_box)
		return (box);
	i = 0;
	while (i < box_len)
	{
		new_box[i] = box[i];
		i++;
	}
	while (i < box_len + len)
	{
		new_box[i] = buf[i - box_len];
		i++;
	}
	new_box[i] = '\0';
	return (free(box), new_box);
}

char	*ft_get_line(const char *box)
{
	char	*line;
	int		line_len;
	int		i;

	line_len = 0;
	while (box[line_len] && box[line_len] != '\n')
		line_len++;
	if (box[line_len] == '\n')
		line_len++;
	line = malloc((line_len + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (i < line_len)
	{
		line[i] = box[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_update_box(char *box)
{
	char	*new_box;
	int		i;
	int		rem_len;

	i = 0;
	while (box[i] && box[i] != '\n')
		i++;
	if (!box[i])
		return (free(box), NULL);
	i++;
	rem_len = 0;
	while (box[i + rem_len])
		rem_len++;
	new_box = malloc((rem_len + 1) * sizeof(char));
	if (!new_box)
		return (box);
	rem_len = 0;
	while (box[i + rem_len])
	{
		new_box[rem_len] = box[i + rem_len];
		rem_len++;
	}
	new_box[rem_len] = '\0';
	return (free(box), new_box);
}

ssize_t	ft_read_box(int fd, char *buf, char **box)
{
	ssize_t	n;

	n = read(fd, buf, BUFFER_SIZE);
	if (n > 0)
	{
		buf[n] = '\0';
		*box = ft_merge(*box, buf, n);
	}
	return (n);
}
