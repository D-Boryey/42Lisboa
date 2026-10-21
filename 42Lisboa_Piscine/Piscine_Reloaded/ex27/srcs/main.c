/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:15:12 by dboryey           #+#    #+#             */
/*   Updated: 2026/10/21 15:13:46 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	write_file(int file)
{
	char	buffer[4096];
	int		handle;

	handle = read(file, buffer, sizeof(buffer));
	while (handle > 0)
	{
		write (1, buffer, handle);
		handle = read(file, buffer, sizeof(buffer));
	}
}

int	main(int ac, char *av[])
{
	int		file;

	if (ac == 1)
	{
		write (1, "File name missing.\n", 19);
		return (1);
	}
	else if (ac > 2)
	{
		write (1, "Too many arguments.\n", 20);
		return (1);
	}
	file = open(av[1], O_RDONLY);
	if (file == -1)
	{
		write (1, "Cannot read file.\n", 18);
		return (1);
	}
	write_file(file);
	close(file);
	return (0);
}
