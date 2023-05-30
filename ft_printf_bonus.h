/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:39:04 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/29 19:34:37 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define UPPER_HEX "0123456789ABCDEF"
# define LOWER_HEX "0123456789abcdef"

int	ft_printf(const char *str, ...);
int	print_char(char c);
int	print_str(char *str);
int	print_ptr(unsigned long nbr, char *base);
int	print_nbr(int nbr);
int	print_unint(unsigned int nbr);
int	print_hex(unsigned int nbr, char *base);
int	print_zeroflag();
int	print_hashflag();
int	print_spcflag();
int	print_spcflag();

#endif