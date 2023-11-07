/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:43:20 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/07 18:38:21 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	static isinset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
char static *get_start(char *start, const char *set)
{
	while (*start && isinset(*start, set))
		start++;
	return ((char *) start);
}

char static *get_end(char *end, const char *set)
{
	char	*diff;

	diff = end;
	while (*end)
		end++;
	if (end != diff)
		end--;
	while (*end && isinset(*end, set))
		end--;
	return ((char *) end);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*start;
	char	*end;
	char	*res;

	i = 0;
	if (!s1)
		return (NULL);
	start = get_start((char *) s1, set);
	end = get_end((char *) s1, set);
	= ft_calloc(end - start + 1, 1);
	if (!res)
		return (NULL);
	while (start[i] && i <= end - start)
	{
		res[i] = start[i];
		i++;
	}
	return (res);
}
