#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

void	print(int n)
{
	char *str = ft_itoa(n);
	printf("%s\n", str);
	// printf("%s\n", itoa(n));
}

int	main(void)
{
	// print("99999999999999999999999999999999999");
	// print("-99999999999999999999999999999999999");
	// print("2147483649546");
	print(-2147483648);
	// printf("%ld\n", LONG_MAX);
	// printf("%ld\n", LONG_MIN);
	// printf("%ld\n", LONG_MAX / 10);
	// printf("%ld\n", LONG_MIN / 10);
	// printf("%d\n", (-1 < 0));
	// printf("%d\n", (1 < 0));
	// print("9223372036854775806");
	// print("-9223372036854775807");
}