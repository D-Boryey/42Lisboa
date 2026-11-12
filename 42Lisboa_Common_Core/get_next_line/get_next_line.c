/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:55:29 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/12 15:32:31 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*box;
	char		*buf;
	char		*line;
	ssize_t		r_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	r_bytes = 1;
	while (!ft_has_eol(box, '\n') && r_bytes > 0)
	{
		r_bytes = ft_read_box(fd, buf, &box);
		if (r_bytes < 0)
			return (free(buf), free(box), box = NULL, NULL);
	}
	free(buf);
	if (!box || !box[0])
		return (free(box), box = NULL, NULL);
	line = ft_get_line(box);
	if (!line)
		return (free(box), box = NULL, NULL);
	box = ft_update_box(box);
	return (line);
}
