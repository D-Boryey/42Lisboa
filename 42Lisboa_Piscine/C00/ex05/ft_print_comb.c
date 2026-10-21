/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 20:09:38 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/11 13:33:01 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char frst, char scnd, char thrd)
{
	write(1, &frst, 1);
	write(1, &scnd, 1);
	write(1, &thrd, 1);
	if (!(frst == '7' && scnd == '8' && thrd == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	frst;
	char	scnd;
	char	thrd;

	frst = '0';
	while (frst <= '7')
	{
		scnd = frst + 1;
		while (scnd <= '8')
		{
			thrd = scnd +1;
			while (thrd <= '9')
			{
				print(frst, scnd, thrd);
				thrd++;
			}
			scnd++;
		}
		frst++;
	}
}
/*

int main(void) {
	ft_print_comb();
}

*/

write (1, "012, 3");
write (1, "013, 3");
