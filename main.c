/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:42:32 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/01 13:13:01 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac, char **av)
{
	size_t size;
	char *dst;

	size = 0;
	dst = NULL;
	if (ac > 1)
	{
		size = ft_atoi(av[2]);
		dst = malloc(ft_strlen(av[1]));
		ft_strlcpy(dst, av[1], size);
	}
	printf("str:%s\n", av[1]);
	printf("res:%s\n", dst);
}

// int	main()
// {
// 	printf("%d\n", ft_isalnum('\n'));
// 	return (0);
// }
