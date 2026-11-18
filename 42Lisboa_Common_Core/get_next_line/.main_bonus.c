#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char *av[])
{
	(void)ac;
	int		fd[3];
	char	*line;
	int		i;
	int		done;

	i = -1;
	while (++i < 3)
		fd[i] = open(av[i + 1], O_RDONLY);
	done = 0;
	while (done < 3)
	{
		done = 0;
		i = -1;
		while (++i < 3)
		{
			line = get_next_line(fd[i]);
			if (!line)
				done++;
			else
				printf("fd%d: %s", i + 1, line);
			free(line);
		}
	}
	i = -1;
	while (++i < 3)
		close(fd[i]);
	return (0);
}