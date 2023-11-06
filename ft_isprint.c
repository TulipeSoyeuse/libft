/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:43:54 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/06 16:18:03 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief check if character is printable
/// @param c character to check
/// @return 1 if character printable
int	ft_isprint(int c)
{
	if (c < 32 ||  c >= 127)
		return (0);
	else 
	 return (1);
}