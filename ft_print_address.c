/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 23:27:36 by abait-br          #+#    #+#             */
/*   Updated: 2026/10/31 00:34:03 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(uintptr_t address)
{
	int	result;
	int	count;

	if (!address)
	{
		result = ft_print_str("(nil)");
		return (result);
	}
	count = 0;
	result = ft_print_str("0x");
	if (result == -1)
		return (-1);
	count += result;
	result = ft_print_hex(address, 'x');
	if (result == -1)
		return (-1);
	count += result;
	return (count);
}
