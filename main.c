#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int		x = 42;
	int		ret1;
	int		ret2;

	printf("\n==================== CHAR ====================\n");
	ret1 = printf("%c\n", 'A');
	ret2 = ft_printf("%c\n", 'A');
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%c\n", '0');
	ret2 = ft_printf("%c\n", '0');
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%c\n", '\n');
	ret2 = ft_printf("%c\n", '\n');
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%c\n", 65);
	ret2 = ft_printf("%c\n", 65);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%c\n", 0);
	ret2 = ft_printf("%c\n", 0);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== STRING ====================\n");
	ret1 = printf("%s\n", "Hello");
	ret2 = ft_printf("%s\n", "Hello");
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%s\n", "");
	ret2 = ft_printf("%s\n", "");
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%s\n", "42 Abu Dhabi");
	ret2 = ft_printf("%s\n", "42 Abu Dhabi");
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%p\n", NULL);
	ret2 = ft_printf("%p\n", NULL);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== DECIMAL ====================\n");
	ret1 = printf("%d\n", 0);
	ret2 = ft_printf("%d\n", 0);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%d\n", 42);
	ret2 = ft_printf("%d\n", 42);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%d\n", -42);
	ret2 = ft_printf("%d\n", -42);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%d\n", INT_MAX);
	ret2 = ft_printf("%d\n", INT_MAX);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%d\n", INT_MIN);
	ret2 = ft_printf("%d\n", INT_MIN);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== INTEGER ====================\n");
	ret1 = printf("%i\n", 0);
	ret2 = ft_printf("%i\n", 0);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%i\n", -100);
	ret2 = ft_printf("%i\n", -100);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%i\n", 999999);
	ret2 = ft_printf("%i\n", 999999);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== UNSIGNED ====================\n");
	ret1 = printf("%u\n", 0);
	ret2 = ft_printf("%u\n", 0);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%u\n", 42);
	ret2 = ft_printf("%u\n", 42);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%u\n", UINT_MAX);
	ret2 = ft_printf("%u\n", UINT_MAX);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%u\n", (unsigned int)-1);
	ret2 = ft_printf("%u\n", (unsigned int)-1);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== HEX LOWER ====================\n");
	ret1 = printf("%x\n", 0);
	ret2 = ft_printf("%x\n", 0);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%x\n", 42);
	ret2 = ft_printf("%x\n", 42);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%x\n", 255);
	ret2 = ft_printf("%x\n", 255);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%x\n", 4096);
	ret2 = ft_printf("%x\n", 4096);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%x\n", UINT_MAX);
	ret2 = ft_printf("%x\n", UINT_MAX);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== HEX UPPER ====================\n");
	ret1 = printf("%X\n", 0);
	ret2 = ft_printf("%X\n", 0);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%X\n", 42);
	ret2 = ft_printf("%X\n", 42);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%X\n", 255);
	ret2 = ft_printf("%X\n", 255);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%X\n", UINT_MAX);
	ret2 = ft_printf("%X\n", UINT_MAX);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== POINTER ====================\n");
	ret1 = printf("%p\n", &x);
	ret2 = ft_printf("%p\n", &x);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%p\n", NULL);
	ret2 = ft_printf("%p\n", NULL);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%p\n", (void *)12345);
	ret2 = ft_printf("%p\n", (void *)12345);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== PERCENT ====================\n");
	ret1 = printf("%%\n");
	ret2 = ft_printf("%%\n");
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("100%% Complete\n");
	ret2 = ft_printf("100%% Complete\n");
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== MIXED ====================\n");
	ret1 = printf("%c %s %d %i %u %x %X %p %%\n",
			'A', "Hello", -42, 42, 42, 42, 42, &x);
	ret2 = ft_printf("%c %s %d %i %u %x %X %p %%\n",
			'A', "Hello", -42, 42, 42, 42, 42, &x);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);



	printf("\n==================== MULTIPLE ====================\n");
	ret1 = printf("%d%d%d\n", 1, 2, 3);
	ret2 = ft_printf("%d%d%d\n", 1, 2, 3);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%s%s%s\n", "A", "B", "C");
	ret2 = ft_printf("%s%s%s\n", "A", "B", "C");
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	ret1 = printf("%x%x%x\n", 10, 20, 30);
	ret2 = ft_printf("%x%x%x\n", 10, 20, 30);
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("\n==================== LONG STRING ====================\n");
	ret1 = printf("%s\n",
		"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.");
	ret2 = ft_printf("%s\n",
		"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.");
	printf("Return: printf=%d | ft_printf=%d\n\n", ret1, ret2);

	return (0);
}
