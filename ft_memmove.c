/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:31:00 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/23 12:37:37 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	if (!dest && !src)
		return (0);
	d_ptr = (unsigned char *)dest;
	s_ptr = (unsigned char *)src;
	if (src < dest)
		while (len--)
			d_ptr[len] = s_ptr[len];
	else
		ft_memcpy(d_ptr, s_ptr, len);
	return (dest);
}
