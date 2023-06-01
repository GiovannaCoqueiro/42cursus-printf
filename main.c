#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	count;

	printf("Mandatory Part:\n");
	printf("FT PRINTF:\n");
	count = ft_printf("char:%c %c\n", 'a', 65);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("char:%c %c\n", 'a', 65);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count = ft_printf("str:%s %s\n", "Hello World", "");
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("str:%s %s\n", "Hello World", "");
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("ptr(p):%p %p %p %p %p\n", 0, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("ptr(p):%p %p %p %p %p\n", 0, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("int(d):%d %d %d %d\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("int(d):%d %d %d %d\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("int(i):%i %i %i %i\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("int(i):%i %i %i %i\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("unint:%u %u %u %u\n", -1, 0, LONG_MAX, UINT_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("unint:%u %u %u %u\n", -1, 0, LONG_MAX, UINT_MAX);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("hex(x):%x %x %x %x %x\n", 0, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("hex(x):%x %x %x %x %x\n", 0, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("hex(X):%X %X %X %X %X\n", 0, -65, 65, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("hex(X):%X %X %X %X %X\n", 0, -65, 65, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("%%:%% %%%%\n");
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("%%:%% %%%%\n");
	printf("return value: %d\n", count);

	printf(".\n.\n.\nBonus Part:\n");
	printf("# flag:\n");
	printf("FT PRINTF:\n");
	count =	ft_printf("hex(x):%#x %#x %#x %#x %#x\n", 0, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("hex(x):%#x %#x %#x %#x %#x\n", 0, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("hex(X):%#X %#X %#X %#X %#X\n", 0, -65, 65, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("hex(X):%#X %#X %#X %#X %#X\n", 0, -65, 65, LONG_MIN, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\n' ' flag:\n");
	printf("FT PRINTF:\n");
	count =	ft_printf("int(d):% d % d % d % d\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("int(d):% d % d % d % d\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("int(i):% i % i % i % i\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("int(i):% i % i % i % i\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\n'+' flag:\n");
	printf("FT PRINTF:\n");
	count =	ft_printf("int(d):%+d %+d %+d %+d\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("int(d):%+d %+d %+d %+d\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);

	printf("\nFT PRINTF:\n");
	count =	ft_printf("int(i):%+i %+i %+i %+i\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);
	printf("ORIGINAL PRINTF:\n");
	count = printf("int(i):%+i %+i %+i %+i\n", 0, INT_MIN, INT_MAX, LONG_MAX);
	printf("return value: %d\n", count);
}
