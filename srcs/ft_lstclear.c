/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:34:03 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/20 17:48:12 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		curr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = curr;
	}
	*lst = NULL;
}
