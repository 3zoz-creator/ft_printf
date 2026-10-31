/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 22:40:00 by abait-br          #+#    #+#             */
/*   Updated: 2026/10/31 00:37:09 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(uintptr_t nbr, char conversion)
{
	int		count;
	int		result;
	char	*hexa;

	if (conversion == 'x')
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
	count = 0;
	if (nbr >= 16)
	{
		result = ft_print_hex(nbr / 16, conversion);
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_print_char(hexa[nbr % 16]);
	if (result == -1)
		return (-1);
	return (count + result);
}
