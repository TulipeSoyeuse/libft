/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:18:56 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/07 12:50:43 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	if (ft_strlen(needle) == 0 || len == 0)
		return ((char *) haystack);
	while (haystack[0] && len != 0)
	{
		i = 0;
		while (haystack[i] && haystack[i] == needle[i] && len - i > 0)
		{
			if ((int) ft_strlen(needle) == i + 1)
				return ((char *) haystack);
			i++;
		}
		haystack++;
		len--;
	}
	return ((char *) 0);
}
