/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:10:14 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/30 19:31:58 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int nbr, char *base)
{
	int				count;
	unsigned int	c;

	count = 0;
	if (nbr > 15)
		count += print_hex(nbr / 16, base);
	c = base[nbr % 16];
	count += print_char(c);
	return (count);
}
