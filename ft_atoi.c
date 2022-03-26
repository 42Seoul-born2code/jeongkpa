/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:52:07 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/23 13:39:13 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long	ans;
	int				sign;
	size_t			i;

	i = 0;
	sign = 1;
	ans = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (ans > (unsigned long) LONG_MAX / 10)
			return ((sign < 0) - 1);
		ans = ans * 10;
		if (ans > (unsigned long) LONG_MAX - str[i] + '0' + (sign < 0))
			return ((sign < 0) - 1);
		ans += (str[i] - '0');
		i++;
	}
	return (ans * sign);
}
