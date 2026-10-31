/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:06:18 by abait-br          #+#    #+#             */
/*   Updated: 2026/10/31 00:37:24 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int nbr)
{
	int		result;
	int		count;
	long	nb;

	nb = nbr;
	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		result = ft_print_char('-');
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_print_unsigned(nb);
	if (result == -1)
		return (-1);
	return (result + count);
}
