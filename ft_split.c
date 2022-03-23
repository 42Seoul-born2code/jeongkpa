/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:18:24 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/23 14:28:31 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word_cnt(const char *str, char c)
{
	size_t	cnt;
	size_t	i;
	size_t	temp;

	cnt = 0;
	i = 0;
	while (str[i] != 0)
	{
		while (c && str[i] == c)
			i++;
		temp = i;
		while (str[i] && str[i] != c)
			i++;
		if (temp != i)
			cnt++;
	}
	return (cnt);
}

static int	do_free(char **ans)
{
	size_t	i;

	i = 0;
	while (ans[i])
	{
		free(ans[i]);
		ans[i] = NULL;
		i++;
	}
	free(ans);
	return (0);
}

static int	do_split(char **ans, const char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		temp = i;
		while (str[i] && str[i] != c)
			i++;
		if (temp != i)
		{
			ans[j] = ft_substr(str, temp, i - temp);
			if (!ans[j])
				return (do_free(ans));
			j++;
		}
		ans[j] = NULL;
	}
	return (1);
}

char	**ft_split(const char *str, char c)
{
	char	**ans;

	if (!str)
		return (NULL);
	ans = ft_calloc(sizeof(char *), get_word_cnt(str, c) + 1);
	if (!ans)
		return (NULL);
	if (do_split(ans, str, c) == 0)
		ans = NULL;
	return (ans);
}
