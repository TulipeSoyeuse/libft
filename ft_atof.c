/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:15:20 by romain            #+#    #+#             */
/*   Updated: 2024/02/18 12:15:13 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(char *val)
{
	size_t	i;
	double	buf_d;
	double	res;
	char	*buf;

	i = 0;
	res = 0;
	while (val[i] && val[i] != '.')
		i++;
	buf = ft_strndup(val, i);
	buf[i] = 0;
	res = ft_atoi(buf);
	free(buf);
	if (!val[i])
		return (res);
	buf_d = ft_atoi(&val[++i]);
	while (buf_d > 1)
		buf_d /= 10;
	return (res + buf_d);
}
