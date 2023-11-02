/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:16:48 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/01 13:38:46 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int	i;
	int j;
	int len;

	i = 0;
	len = ft_strlen(dst);
	j = len;
	while(src[i] && i < (int) dstsize - len - 1)
	{
		dst[j++] = src[i++];
	}
	if (dstsize != 0)
		dst[j] = 0;
	return (len + ft_strlen(src));
}
