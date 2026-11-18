/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:56:02 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/18 18:38:10 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	box[OPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	ssize_t		r_bytes;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	r_bytes = 1;
	while (r_bytes > 0)
	{
		if (box[fd][0])
		{
			line = ft_strjoin(line, box[fd], ft_linelen(box[fd]));
			if (!line)
				return (box[fd][0] = '\0', NULL);
			ft_shift(box[fd], ft_linelen(box[fd]));
		}
		if (ft_has_eol(line))
			return (line);
		r_bytes = read(fd, box[fd], BUFFER_SIZE);
		if (r_bytes < 0)
			return (box[fd][0] = '\0', free(line), NULL);
		box[fd][r_bytes] = '\0';
	}
	return (line);
}
