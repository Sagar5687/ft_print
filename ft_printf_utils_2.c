/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 18:05:25 by sturuvek          #+#    #+#             */
/*   Updated: 2026/07/21 18:05:27 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_fd(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		count += ft_putchar_fd(*(s++));
	}
	return (count);
}

int	ft_putnbr_fd(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putstr_fd("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		count += ft_putchar_fd('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr_fd(n / 10);
	count += ft_putchar_fd((n % 10) + '0');
	return (count);
}
