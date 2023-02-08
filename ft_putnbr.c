/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:00:26 by aabourri          #+#    #+#             */
/*   Updated: 2023/02/07 12:55:06 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *i)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		*i += 11;
		return ;
	}
	else if (nb < 0 && nb != INT_MIN)
	{
		ft_putchar('-', i);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + 48, i);
	else
	{
		ft_putnbr((nb / 10), i);
		ft_putchar((nb % 10) + 48, i);
	}
}
