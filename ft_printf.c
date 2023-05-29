/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:33:49 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/29 14:56:48 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_variable(va_list list, char c);

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		print_count;
	int		index;

	if (str == NULL)
		return (-1);
	va_start(list, str);
	index = -1;
	print_count = 0;
	while (str[++index] != '\0')
	{
		if (str[index] == '%')
		{
			index++;
			print_count += convert_variable(list, str[index]);
		}
		else
			print_count += print_char(str[index]);
	}
	va_end(list);
	return (print_count);
}

static int	convert_variable(va_list list, char c)
{
	int	variable_len;

	variable_len = 0;
	if (c == 'c')
		variable_len += print_char(va_arg(list, int));
	else if (c == 's')
		variable_len += print_str(va_arg(list, char *));
	else if (c == 'p')
		variable_len += print_ptr(va_arg(list, unsigned long), LOWER_HEX);
	else if (c == 'd' || c == 'i')
		variable_len += print_nbr(va_arg(list, int));
	else if (c == 'u')
		variable_len += print_unint(va_arg(list, unsigned int));
	else if (c == 'x')
		variable_len += print_hex(va_arg(list, unsigned int), LOWER_HEX);
	else if (c == 'X')
		variable_len += print_hex(va_arg(list, unsigned int), UPPER_HEX);
	else if (c == '%')
		variable_len += print_char(c);
	return (variable_len);
}
