/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:43:07 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/17 14:47:32 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cur_lst;

	if (!lst)
		return (NULL);
	cur_lst = lst;
	while (cur_lst->next != NULL)
		cur_lst = cur_list->next;
	return (cur_lst);
}
