/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:10:14 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/31 17:03:06 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int nbr, char *str, int index, int hash_check)
{
	int				count;

	count = 0;
	if (nbr != 0)
		if (str[index - 1] == '#' && hash_check == 1)
		{
			if (str[index] == 'x')
				count += print_str("0x");
			else if (str[index] == 'X')
				count += print_str("OX");
		}
	hash_check = 0;
	if (str[index] == 'x')
	{
		if (nbr > 15)
			count += print_hex(nbr / 16, str, index, hash_check);
		count += print_char(LOWER_HEX[nbr % 16]);
		return (count);
	}
	if (nbr > 15)
		count += print_hex(nbr / 16, str, index, hash_check);
	count += print_char(UPPER_HEX[nbr % 16]);
	return (count);
}
