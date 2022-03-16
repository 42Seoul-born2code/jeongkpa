#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	print(char *str)
{
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}

int	main(void)
{
	print("99999999999999999999999999999999999");
	print("-99999999999999999999999999999999999");
	print("2147483649546");
	print("-2147483649");
}

// long min == 0000 ... 0000 == 0
// long max == 1111 ... 1111 == -1