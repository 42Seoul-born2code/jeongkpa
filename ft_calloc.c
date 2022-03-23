/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:50:31 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/20 16:32:49 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	const size_t	mem_size = count * size;
	void			*ptr;

	ptr = malloc(mem_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, mem_size);
	return (ptr);
}
