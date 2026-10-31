/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 19:20:20 by abait-br          #+#    #+#             */
/*   Updated: 2026/10/31 00:29:38 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	int	count;
	int	result;

	count = 0;
	if (nbr >= 10)
	{
		result = ft_print_unsigned(nbr / 10);
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_print_char((nbr % 10) + '0');
	if (result == -1)
		return (-1);
	return (count + result);
}
