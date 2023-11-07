/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:16:48 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/07 12:17:02 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
 {
     char       *d = dst;
     const char *s = src;
     size_t      n = dstsize;
     size_t      dlen;

     while (n-- != 0 && *d)
         d++;
     dlen = d - dst;
     n = dstsize - dlen;
     if (n == 0)
         return (dlen + ft_strlen(s));
     while (*s)
     {
         if (n != 1)
         {
             *d++ = *s;
             n--;
         }
         s++;
     }
     *d = '\0';
     return (dlen + (s - src));
 }
 
// {
// 	int	i;
// 	int j;
// 	int len;
// 	if ((int) dstsize == 0)
// 		return (0);
// 	i = 0;
// 	j = ft_strlen(dst);
// 	len = j;
// 	while(i < (int) dstsize - len - 1 && src[i])
// 		dst[j++] = src[i++];
// 	if (dstsize != 0)
// 		dst[j] = 0;
// 	return (ft_strlen(src) + len);
// }
