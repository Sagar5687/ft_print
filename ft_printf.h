#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_printf(const char *format, ...);
int ft_vprintf(const char *format, va_list args);
int ft_handle_format(const char *format, va_list args);
int ft_print_pointer(void *ptr);
int ft_print_unsigned(unsigned int num);
int ft_print_hexadecimal(unsigned int num, char format);
int ft_putchar_fd(char c);
int ft_putstr_fd(char *s);
int ft_putnbr_fd(int n);
