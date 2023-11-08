/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:42:32 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/08 13:43:00 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	printf("base:%s\n",
	 "      split       this for   me  !       "
	);
	char **result = ft_split("      split       this for   me  !       ", ' ');
	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	while (*result)
	{
		printf("%s:%s - %d\n",*expected, *result, strcmp(*result, *expected));
		result++;
		expected++;
	}
}
