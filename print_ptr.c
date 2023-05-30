/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:07:13 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/30 19:35:04 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hexlong(unsigned long nbr, char *base);

int	print_ptr(unsigned long nbr, char *base)
{
	int	count;

	if (nbr == 0)
		return (print_str("(nil)"));
	count = 0;
	count += print_str("0x");
	count += print_hexlong(nbr, base);
	return (count);
}

static int	print_hexlong(unsigned long nbr, char *base)
{
	int				count;

	count = 0;
	if (nbr > 15)
		count += print_hexlong(nbr / 16, base);
	count += print_char(base[nbr % 16]);
	return (count);
}
