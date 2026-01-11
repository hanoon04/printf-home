/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-tawa <hal-tawa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 17:55:07 by hal-tawa          #+#    #+#             */
/*   Updated: 2025/12/25 17:55:07 by hal-tawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printf_char(int c);
int	ft_printf_int(int n);
int	ft_printf_str(char *s);
int	ft_printf_uint(unsigned int n);
int	ft_printf_hex(unsigned long n, char format);
int	ft_print_ptr(void *ptr);

#endif
