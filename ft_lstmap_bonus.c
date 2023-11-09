/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:52:09 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 16:00:51 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_res;
	t_list	*res;
	t_list	*current;
	t_list	*next;

	if (!lst || !f || !del)
		return (NULL);
	res = ft_lstnew((*f)(lst->content));
	if (!res)
		return (NULL);
	current = lst->next;
	while (current)
	{
		current_res = ft_lstnew((*f)(current->content));
		if (!current_res)
			return (NULL);
		ft_lstadd_back(&res, current_res);
		next = current->next;
		(*del)(current->content);
		current = next;
	}
	ft_lstlast(res)->next = NULL;
	return (res);
}
