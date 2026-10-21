/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:32:19 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/15 15:17:09 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	*argv[])
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[0][i])
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
