#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char *av[])
{
	(void)ac;
	int fd = open(av[1], O_RDONLY);
	char *line = get_next_line(fd);
	while (line = get_next_line(fd))
	{
		printf("%s", line);
		free(line);
	}
	close (fd);
	return (0);
}