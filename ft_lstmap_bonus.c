/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:52:09 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/15 14:00:37 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_res;
	t_list	*res;
	t_list	*current;
	t_list	*next;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	res = ft_lstnew((*f)(lst->content));
	if (!res)
		return (NULL);
	current = lst->next;
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

// void *		lstmap_f(void *content) {
// 	(void)content;
// 	return ("OK !");
// }

// int				__delNum = 0;
// void			lstdel_f(void *lst) {
// 	(void)lst;
// 	__delNum++;
// }

// int	main(void)
// {
// 	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
// 	t_list *ret;

// 	l->next = ft_lstnew(strdup("ss"));
// 	l->next->next = ft_lstnew(strdup("-_-"));
// 	ret = ft_lstmap(l, lstmap_f, lstdel_f);
// 	printf("%d\n",strcmp(ret->content, "OK !"));
// 	printf("%d\n",strcmp(ret->next->content, "OK !"));
// 	printf("%d\n",strcmp(ret->next->next->content, "OK !"));
// 	printf("%d\n",strcmp(l->content, " 1 2 3 "));
// 	printf("%d\n",strcmp(l->next->content, "ss"));
// 	printf("%d\n",strcmp(l->next->next->content, "-_-"));
// }
