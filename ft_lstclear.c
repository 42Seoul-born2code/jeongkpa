/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:34:03 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/20 18:25:59 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	head = *lst;
	while (head)
	{
		del(head->content);
		temp = head->next;
		free(head);
		head = NULL;
		head = temp;
	}
	*lst = NULL;
}
