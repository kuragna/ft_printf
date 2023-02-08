/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:02:59 by aabourri          #+#    #+#             */
/*   Updated: 2023/02/06 14:13:00 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define SIZE 20

static int	ft_count(uintptr_t n, int size)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (i < size && n > 0)
	{
		i++;
		n /= 16;
	}
	return (i);
}

void	ft_puthex(uintptr_t nb, int c, int size, int *j)
{
	char			str[SIZE];
	uintptr_t		rem;
	int				i;

	i = ft_count(nb, size);
	str[i] = '\0';
	while (--i >= 0)
	{
		rem = (nb % 16);
		if (rem < 10)
			str[i] = rem + 48;
		if (rem >= 10)
			str[i] = rem + c;
		nb /= 16;
	}
	ft_putstr(str, j);
}
