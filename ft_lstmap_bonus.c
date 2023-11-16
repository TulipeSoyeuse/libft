/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:52:09 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/16 13:24:51 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(t_list *lst, void *(*f)(void *), void (*del)(void *),
		t_list *res)
{
	if (!lst || !f || !del)
		return (NULL);
	res = ft_lstnew((*f)(lst->content));
	if (!res)
		return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_res;
	t_list	*res;
	t_list	*current;
	t_list	*next;
	void	*set;

	if (check(lst, f, del, res))
		return ((NULL)current = lst->next);
	while (current)
	{
		set = (*f)(current->content);
		current_res = ft_lstnew(set);
		if (!current_res)
		{
			del(set);
			ft_lstclear(&res, *del);
			return (res);
		}
		ft_lstadd_back(&res, current_res);
		next = current->next;
		current = next;
	}
	ft_lstlast(res)->next = NULL;
	return (res);
}
