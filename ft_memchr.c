/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:41:28 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/07 10:47:48 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (((unsigned char *)s)[i] && i < (int) n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
			return ((void *) &(((unsigned char *)s)[i]));

		i++;
	}
	if (c == '\0')
		return ((void *) &(((unsigned char *)s)[i]));
	return (NULL);
}
