/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:02:26 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/29 12:36:29 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_nbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		count += print_char('-');
		count += print_char('2');
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		count += print_char('-');
		print_nbr(nbr * -1);
	}
	if (nbr > 9)
		count += print_nbr(nbr / 10);
	count += print_char(nbr % 10);
	return (count);
}