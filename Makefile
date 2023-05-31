# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 13:33:56 by gcoqueir          #+#    #+#              #
#    Updated: 2023/05/31 14:49:26 by gcoqueir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
FILES = ft_printf.c print_char.c print_str.c print_ptr.c print_nbr.c \
			print_unint.c print_hex.c
OBJS = $(FILES:.c=.o)
BONUS = ft_printf_bonus.c print_char_bonus.c print_str_bonus.c \
				print_ptr_bonus.c print_nbr_bonus.c print_unint_bonus.c \
				print_hex_bonus.c
BONUS_OBJS = $(BONUS:.c=.o)
NAME = libftprintf.a

all: $(NAME)
	@echo SUCCESS!!

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all bonus clean fclean re rebonus