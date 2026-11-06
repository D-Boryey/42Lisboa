/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:42:00 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/06 19:31:40 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dispatcher(char format, va_list *arg, int *counter)
{
	if (format == 'c')
		ft_putchar(va_arg(*arg, int), counter);
	if (format == 's')
		ft_putstr(va_arg(*arg, char *), counter);
	if (format == 'p')
	{
		ft_putstr("0x", counter);
		ft_putnbr_base_unsigned((unsigned long)va_arg(*arg, void *),
			"0123456789abcdef", counter);
	}
	if ((format == 'd') || (format == 'i'))
		ft_putnbr_base(va_arg(*arg, int), "0123456789", counter);
	if (format == 'u')
		ft_putnbr_base_unsigned(va_arg(*arg, unsigned int),
			"0123456789", counter);
	if (format == 'x')
		ft_putnbr_base(va_arg(*arg, int), "0123456789abcdef", counter);
	if (format == 'X')
		ft_putnbr_base(va_arg(*arg, int), "0123456789ABCDEF", counter);
	if (format == '%')
		ft_putchar('%', counter);
}
