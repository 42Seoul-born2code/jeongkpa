/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:18:24 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/17 18:19:11 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(const char *s, char c)
{
	size_t	ret;
	size_t	i;
	size_t	temp;

	ret = 0;
	i = 0;
	while (s[i])
	{
		while (	c && s[i] == c)
			i++;
		temp = i;
		while (s[i] && s[i] != c)
			i++;
		if (temp != i)
			ret++;
	}
	return (ret);
}

static int	free_all(char **ret)
{
	size_t	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		ret[i] = NULL;
		i++;
	}
	free(ret);
	return (0);
}

static int	split_strings(char **ret, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		temp = i;
		while (s[i] && s[i] != c)
			i++;
		if (temp != i)
		{
			ret[j] = ft_substr(s, temp, i - temp);
			if (!ret[j++])
				return (free_all(ret));
		}
		ret[j] = NULL;
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;

	ret = ft_calloc(sizeof(char *), get_size(s, c) + 1);
	if (!ret)
		return (NULL);
	if (!split_strings(ret, s, c))
	{
		free(ret);
		ret = NULL;
	}
	return (ret);
}