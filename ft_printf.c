/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-tawa <hal-tawa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 19:57:41 by hal-tawa          #+#    #+#             */
/*   Updated: 2026/01/02 19:57:41 by hal-tawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	handle_format(char c, va_list args)
{
	if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else if (c == 'c')
		return (ft_printf_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_printf_str(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_printf_int(va_arg(args, int)));
	else if (c == 'u')
		return (ft_printf_uint(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_printf_hex(va_arg(args, unsigned int), c));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			count = count + handle_format(format[i + 1], args);
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
