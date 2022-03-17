/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:48:41 by jeongkpa          #+#    #+#             */
/*   Updated: 2022/03/17 18:31:41 by jeongkpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*temp;
	t_list	*newlst;

	if (lst == NULL || f == NULL)
		return (0);
	newlst = ft_lstnew(f(lst->content));
	if (newlst == NULL)
		return (0);
	curr = newlst;
	lst = lst->next;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&newlst, del);
			return (0);
		}
		curr->next = temp;
		curr = temp;
		lst = lst->next;
	}
	return (newlst);
}
