/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:19:25 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/29 16:18:54 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	int	count;

	if (str == NULL)
		return (print_str("(null)"));
	count = 0;
	while (str[count] != '\0')
	{
		print_char(str[count]);
		count++;
	}
	return (count);
}
