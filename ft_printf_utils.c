/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 18:05:18 by sturuvek          #+#    #+#             */
/*   Updated: 2026/07/21 18:05:20 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
	{
		count += ft_putstr_fd("(nil)");
	}
	else
	{
		count += ft_putstr_fd("0x");
		count += ft_print_hexadecimal((unsigned long)ptr, 'x');
	}
	return (count);
}

int	ft_print_unsigned(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
	{
		count += ft_print_unsigned(num / 10);
	}
	count += ft_putchar_fd((num % 10) + '0');
	return (count);
}

int	ft_print_hexadecimal(unsigned long num, char format)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_print_hexadecimal(num / 16, format);
	if (format == 'x')
		count += ft_putchar_fd("0123456789abcdef"[num % 16]);
	else
		count += ft_putchar_fd("0123456789ABCDEF"[num % 16]);
	return (count);
}
