/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:42:32 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/07 12:42:12 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char *s1 = "FF";
	char *s2 = "see FF your FF return FF now FF";
	char *i1 = strnstr(s1, s2, 4);
	char *i2 = ft_strnstr(NULL, s2, 4);
	printf("base:%s\nres:%s\n", i1, i2);
}
