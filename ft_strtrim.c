/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:02 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/16 19:42:12 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ans;
	char const	*start;
	char const	*end;

	if (set == NULL)
		return (ft_strdup(s1));
	else if (s1 == NULL)
		return (NULL);
	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (start < end && ft_strchr(set, *start))
		start++;
	while (end >= start && ft_strchr(set, *end))
		end--;
	ans = ft_substr(s1, start - s1, end - start + 1);
	return (ans);
}
