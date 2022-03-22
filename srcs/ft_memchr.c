/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:22:03 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/22 15:12:03 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	character;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	character = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == character)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
