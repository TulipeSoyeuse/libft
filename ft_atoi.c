/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:38:23 by rdupeux           #+#    #+#             */
/*   Updated: 2023/10/31 19:24:05 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_signe(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && !ft_isdigit(str[i]))
	{
		if (str[i] == '-')
			return (-1);
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (!ft_isdigit(str[i]))
		i++;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * get_signe(str));
}

// int	main(int ac, char **av)
// {
// 	int	res;

// 	res = 0;
// 	if (ac > 1)
// 	{
// 		res = ft_atoi(av[1]);
// 	}
// 	ft_putnbr_fd(res, 0);
// }
