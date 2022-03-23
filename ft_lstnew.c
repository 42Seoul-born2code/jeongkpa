/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:39:02 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/20 18:20:02 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_mem;

	new_mem = (t_list *)malloc(sizeof(t_list));
	if (!new_mem)
		return (NULL);
	new_mem->content = content;
	new_mem->next = NULL;
	return (new_mem);
}
