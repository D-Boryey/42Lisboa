/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:56:02 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/20 14:04:43 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	box[MAX_FD][BUFFER_SIZE + 1];
	char		*line;
	ssize_t		r_bytes;

	if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	r_bytes = 1;
	while (r_bytes > 0)
	{
		if (box[fd][0])
		{
			line = ft_strjoin(line, box[fd], ft_len(box[fd], '\n'));
			if (!line)
				return (box[fd][0] = '\0', NULL);
			ft_shift(box[fd], ft_len(box[fd], '\n'));
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

// #include "get_next_line_bonus.h"
// #include <stdio.h>
// #include <fcntl.h>

// int	main(int ac, char *av[])
// {
// 	(void)ac;
// 	int		fd[3];
// 	char	*line;
// 	int		i;
// 	int		done;

// 	i = -1;
// 	while (++i < 3)
// 		fd[i] = open(av[i + 1], O_RDONLY);
// 	done = 0;
// 	while (done < 3)
// 	{
// 		done = 0;
// 		i = -1;
// 		while (++i < 3)
// 		{
// 			line = get_next_line(fd[i]);
// 			if (!line)
// 				done++;
// 			else
// 				printf("fd%d: %s", i + 1, line);
// 			free(line);
// 		}
// 	}
// 	i = -1;
// 	while (++i < 3)
// 		close(fd[i]);
// 	return (0);
// }