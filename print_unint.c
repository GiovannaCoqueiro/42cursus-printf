/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:08:35 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/29 13:10:17 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_unint(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr > 9)
		count += print_unint(nbr / 10);
	count += print_char(nbr % 10);
	return (count);
}