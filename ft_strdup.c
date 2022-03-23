/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:48:51 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/16 16:40:53 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_mem;
	size_t	size;
	size_t	i;

	new_mem = 0;
	size = ft_strlen(str);
	i = 0;
	new_mem = malloc(size + 1);
	if (!new_mem)
		return (0);
	while (str[i])
	{
		new_mem[i] = str[i];
		i++;
	}
	new_mem[i] = '\0';
	return (new_mem);
}
