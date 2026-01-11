/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-tawa <hal-tawa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 12:36:04 by hal-tawa          #+#    #+#             */
/*   Updated: 2025/12/26 12:36:04 by hal-tawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	numlen(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static void	ft_puthex(unsigned long n, char format)
{
	char	*hex;
	char	c;

	if (format == 'x')
		hex = "0123456789abcdef";
	if (format == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex(n / 16, format);
	c = hex[n % 16];
	write(1, &c, 1);
}

int	ft_printf_hex(unsigned long n, char format)
{
	ft_puthex(n, format);
	return (numlen(n));
}
