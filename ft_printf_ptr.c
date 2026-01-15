/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-tawa <hal-tawa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 22:54:47 by hal-tawa          #+#    #+#             */
/*   Updated: 2026/01/01 22:54:47 by hal-tawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ptrlen(unsigned long p)
{
	int	i;

	i = 0;
	if (p == 0)
		return (1);
	while (p > 0)
	{
		p = p / 16;
		i++;
	}
	return (i);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	p;

	write(1, "0x", 2);
	if (ptr == NULL)
	{
		write(1, "nil", 3);
		return (3);
	}
	p = (unsigned long)ptr;
	ft_printf_hex(p, 'x');
	return (ptrlen(p) + 2);
}
