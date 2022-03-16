/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:52:46 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/14 17:39:00 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *str, int c)
{
	char	*p_str;
	char	to_find;
	int		i;

	p_str = (char *)str;
	to_find = (char)c;
	i = ft_strlen(str);
	if (to_find == '\0')
		return (&p_str[i]);
	while (i >= 0)
	{
		if (p_str[i] == to_find)
			return (&p_str[i]);
		i--;
	}
	return (0);
}
