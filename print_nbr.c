/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:02:26 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/31 17:03:10 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int nbr, char *str, int index, int flag_check)
{
	int	count;

	count = 0;
	if (nbr >= 0 && flag_check == 1)
	{
		if (str[index - 1] == ' ')
			count += print_char(str[index - 1]);
		else if (str[index - 1] == '+')
			count += print_char(str[index - 1]);
	}
	flag_check = 0;
	if (nbr == -2147483648)
	{
		count += print_char('-');
		count += print_char('2');
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		count += print_char('-');
		nbr *= -1;
	}
	if (nbr > 9)
		count += print_nbr(nbr / 10, str, index, flag_check);
	count += print_char((nbr % 10) + '0');
	return (count);
}
