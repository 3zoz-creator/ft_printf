/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:18:06 by abait-br          #+#    #+#             */
/*   Updated: 2026/10/31 19:30:25 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	to_output(va_list *args, char conversion)
{
	if (conversion == 'c')
		return (ft_print_char(va_arg(*args, int)));
	else if (conversion == 's')
		return (ft_print_str(va_arg(*args, char *)));
	else if (conversion == 'd' || conversion == 'i')
		return (ft_print_nbr(va_arg(*args, int)));
	else if (conversion == 'u')
		return (ft_print_unsigned(va_arg(*args, unsigned int)));
	else if (conversion == 'x' || conversion == 'X')
		return (ft_print_hex(va_arg(*args, unsigned int), conversion));
	else if (conversion == 'p')
		return (ft_print_address((uintptr_t)va_arg(*args, void *)));
	else if (conversion == '%')
		return (ft_print_char('%'));
	return (-1);
}

static int	ft_process_format(const char *format, va_list *args)
{
	int	i;
	int	result;
	int	count;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			result = to_output(args, format[i + 1]);
			i += 2;
		}
		else
		{
			result = ft_print_char(format[i]);
			i++;
		}
		if (result == -1)
			return (-1);
		count += result;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		result;

	va_start(args, format);
	result = ft_process_format(format, &args);
	va_end(args);
	return (result);
}
