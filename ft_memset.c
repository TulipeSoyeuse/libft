/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:13:38 by rdupeux           #+#    #+#             */
/*   Updated: 2023/10/31 16:56:48 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*str;
	char			val;

	str = (char *) b;
	i = 0;
	val = (unsigned char) c;
	while (str[i] && i <= len - 1)
	{
		str[i] = val;
		i++;
	}
	return (str);
}

// int	main(int ac, char **av)
// {
// 	char	*res;

// 	res = NULL;
// 	if (ac > 1)
// 	{
// 		res = av[1];
// 		printf("before:%s\n", res);
// 		res = ft_memset(res, 'e', 8);
// 	}
// 	printf("after:%s\n", res);
// }
