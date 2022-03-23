/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:52:31 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/23 16:32:34 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*p_s1;
	size_t	i;

	p_s1 = (char *)s1;
	i = 0;
	if (ft_strlen(s2) == 0)
		return (p_s1);
	if (n > ft_strlen(s1))
		n = ft_strlen(s1);
	while (i < n)
	{
		if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
		{
			if (i + ft_strlen(s2) > n)
				return (0);
			return (&p_s1[i]);
		}
		i++;
	}
	return (0);
}
