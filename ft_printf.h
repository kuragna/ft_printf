/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:17:00 by aabourri          #+#    #+#             */
/*   Updated: 2023/02/08 16:02:06 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

void	ft_putchar(char c, int *i);
void	ft_putunbr(unsigned int nb, int *i);
void	ft_putnbr(int nb, int *i);
void	ft_putstr(const char *s, int *i);
void	ft_puthex(uintptr_t nb, int c, int size, int *i);
void	ft_putptr(void *ptr, int *i);
int		ft_printf(const char *fmt, ...);
#endif
