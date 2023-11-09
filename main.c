/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:42:32 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 15:27:05 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *		lstmap_f(void *content) {
	(void)content;
	return ("OK !");
}

int				__delNum = 0;
void			lstdel_f(void *lst) {
	(void)lst;
	__delNum++;
}

int	main()
{
	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
	t_list *ret;

	l->next = ft_lstnew(strdup("ss"));
	l->next->next = ft_lstnew(strdup("-_-"));
	ret = ft_lstmap(l, lstmap_f, lstdel_f);
	printf("%d\n",strcmp(ret->content, "OK !"));
	printf("%d\n",strcmp(ret->next->content, "OK !"));
	printf("%d\n",strcmp(ret->next->next->content, "OK !"));
	printf("%d\n",strcmp(l->content, " 1 2 3 "));
	printf("%d\n",strcmp(l->next->content, "ss"));
	printf("%d\n",strcmp(l->next->next->content, "-_-"));
}
