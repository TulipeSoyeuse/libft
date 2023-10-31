/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:38:23 by rdupeux           #+#    #+#             */
/*   Updated: 2023/10/31 12:30:44 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	get_signe(const char *str)
{
	if (str[0] == '-')
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[0] < '0' || str[0] > '9')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
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
