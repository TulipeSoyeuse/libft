/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:42:32 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/01 13:36:50 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char *dst;
	char src[]="0123456789";

	dst = NULL;

	dst = malloc(30);
	ft_bzero(dst, 30);
	ft_strlcpy(dst, "debut de str:", 13);
	printf("str:%s\n", dst);
	ft_strlcat(dst, src, 22);
	printf("res:%s\n", dst);
}

// int	main()
// {
// 	printf("%d\n", ft_isalnum('\n'));
// 	return (0);
// }
