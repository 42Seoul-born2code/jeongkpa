/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:21:38 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/23 12:47:09 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_ptr;
	unsigned char	data;

	s_ptr = (unsigned char *)b;
	data = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = data;
		i++;
	}
	return (s_ptr);
}
