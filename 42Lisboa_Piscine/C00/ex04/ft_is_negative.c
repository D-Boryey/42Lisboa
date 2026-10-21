/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 18:48:51 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/04 11:36:48 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
/*

int main(void) {
    ft_is_negative(-1);
    write(1,"\n", 1);

    ft_is_negative(0);
    write(1,"\n", 1);

    ft_is_negative(1);
    write(1,"\n", 1);
}

*/