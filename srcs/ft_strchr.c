/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:53:02 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/14 17:38:45 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *str, int c)
{
	char	*p_str;
	char	to_find;
	size_t	i;

	i = 0;
	p_str = (char *)str;
	to_find = (char)c;
	while (p_str[i])
	{
		if (p_str[i] == to_find)
			return (&p_str[i]);
		i++;
	}
	if (to_find == '\0')
		return (&p_str[i]);
	return (0);
}
