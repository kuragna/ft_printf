/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:00:45 by aabourri          #+#    #+#             */
/*   Updated: 2023/02/07 17:03:23 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_check(char t, va_list ptr, int *i)
{
	char	*s;

	if (t == 'x')
		ft_puthex(va_arg(ptr, unsigned int), 87, 8, i);
	else if (t == 'X')
		ft_puthex(va_arg(ptr, unsigned int), 55, 8, i);
	else if (t == 'd' || t == 'i')
		ft_putnbr(va_arg(ptr, int), i);
	else if (t == 'u')
		ft_putunbr(va_arg(ptr, unsigned int), i);
	else if (t == 'c')
		ft_putchar(va_arg(ptr, int), i);
	else if (t == 's')
	{
		s = va_arg(ptr, char *);
		if (!s)
			ft_putstr("(null)", i);
		else
			ft_putstr(s, i);
	}
	else if (t == 'p')
		ft_putptr(va_arg(ptr, void *), i);
	else if (t == '%')
		ft_putchar('%', i);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ptr;
	int		len;

	va_start(ptr, fmt);
	len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			if (*(fmt + 1) != '\0')
				ft_printf_check(*(++fmt), ptr, &len);
			fmt++;
		}
		if (*fmt != '%' && *fmt != '\0')
			ft_putchar(*(fmt++), &len);
	}
	va_end(ptr);
	return (len);
}
