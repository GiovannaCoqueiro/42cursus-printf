/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:08:35 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/31 17:03:19 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unint(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr > 9)
		count += print_unint(nbr / 10);
	count += print_char((nbr % 10) + '0');
	return (count);
}
