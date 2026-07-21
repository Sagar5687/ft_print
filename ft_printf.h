/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 18:05:08 by sturuvek          #+#    #+#             */
/*   Updated: 2026/07/21 18:05:09 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_vprintf(const char *format, va_list args);
int	ft_handle_format(const char *format, va_list args);
int	ft_print_pointer(void *ptr);
int	ft_print_unsigned(unsigned int num);
int	ft_print_hexadecimal(unsigned long num, char format);
int	ft_putchar_fd(char c);
int	ft_putstr_fd(char *s);
int	ft_putnbr_fd(int n);

#endif
