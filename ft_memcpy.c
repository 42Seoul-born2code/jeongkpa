/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:25:19 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/23 12:25:36 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	i = 0;
	d_ptr = (unsigned char *)dst;
	s_ptr = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		d_ptr[i] = s_ptr[i];
		i++;
	}
	return (dst);
}
