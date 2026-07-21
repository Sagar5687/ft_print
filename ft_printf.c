/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 18:05:00 by sturuvek          #+#    #+#             */
/*   Updated: 2026/07/21 18:05:02 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = ft_vprintf(format, args);
	va_end(args);
	return (count);
}

int	ft_vprintf(const char *format, va_list args)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				break ;
			count += ft_handle_format(format, args);
			format++;
		}
		else
		{
			ft_putchar_fd(*format);
			count++;
			format++;
		}
	}
	return (count);
}

int	ft_handle_format(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar_fd(va_arg(args, int));
	else if (*format == 's')
		count += ft_putstr_fd(va_arg(args, char *));
	else if (*format == 'p')
		count += ft_print_pointer(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr_fd(va_arg(args, int));
	else if (*format == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
		count += ft_print_hexadecimal(va_arg(args, unsigned int), *format);
	else if (*format == '%')
	{
		ft_putchar_fd('%');
		count++;
	}
	return (count);
}
