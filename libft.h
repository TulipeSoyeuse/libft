/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:17:25 by rdupeux           #+#    #+#             */
/*   Updated: 2023/10/31 15:31:12 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft
# define libft

# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
int		ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);
void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c)

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
#endif
