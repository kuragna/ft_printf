/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:01:36 by aabourri          #+#    #+#             */
/*   Updated: 2023/02/06 12:28:50 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nb, int *i)
{
	if (nb < 10)
		ft_putchar(nb + 48, i);
	else
	{
		ft_putunbr(nb / 10, i);
		ft_putchar((nb % 10) + 48, i);
	}
}
