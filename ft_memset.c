/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:13:38 by rdupeux           #+#    #+#             */
/*   Updated: 2023/10/27 19:45:51 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*memset(void *b, int c, size_t len)
{
	int		i;
	char	*str;
	char	val;

	str = (char *) b;
	i = 0;
	val = (unsigned char) c;
	while (str[i] && i < len - 1)
	{
		str[i] = val;
		i++;
	}
	return (str);
}
