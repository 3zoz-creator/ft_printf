/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 00:28:20 by abait-br          #+#    #+#             */
/*   Updated: 2026/10/31 19:38:16 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_str(const char *str);
int	ft_print_nbr(int nbr);
int	ft_print_unsigned(unsigned int nbr);
int	ft_print_hex(uintptr_t nbr, char conversion);
int	ft_print_address(uintptr_t address);

#endif