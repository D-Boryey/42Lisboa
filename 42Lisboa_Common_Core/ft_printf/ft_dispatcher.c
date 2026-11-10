/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:42:00 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/07 18:02:13 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

static void	ft_print_pointer(va_list *arg, int *counter)
{
	void	*pointer;

	pointer = va_arg(*arg, void *);
	if (pointer == NULL)
		ft_putstr("(nil)", counter);
	else
	{
		ft_putstr("0x", counter);
		ft_putnbr_base_unsigned((unsigned long)pointer,
			"0123456789abcdef", counter);
	}
}

static void	ft_print_unsigned(char format, va_list *arg, int *counter)
{
	char	*base;

	base = "0123456789";
	if (format == 'x')
		base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	ft_putnbr_base_unsigned(va_arg(*arg, unsigned int), base, counter);
}

void	ft_dispatcher(char format, va_list *arg, int *counter)
{
	if (format == 'c')
		ft_putchar(va_arg(*arg, int), counter);
	if (format == 's')
		ft_putstr(va_arg(*arg, char *), counter);
	if (format == 'p')
		ft_print_pointer(arg, counter);
	if ((format == 'd') || (format == 'i'))
		ft_putnbr_base(va_arg(*arg, int), "0123456789", counter);
	if ((format == 'u') || (format == 'x') || (format == 'X'))
		ft_print_unsigned(format, arg, counter);
	if (format == '%')
		ft_putchar('%', counter);
}
