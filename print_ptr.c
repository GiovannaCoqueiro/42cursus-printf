/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:07:13 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/29 14:21:20 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_ptr(unsigned long nbr, char *base)
{
	int	count;

	if (nbr == 0)
		return (print_str("(nil)"));
	count = 0;
	count += print_str("0x");
	count += print_hex(nbr, base);
	return (count);
}
