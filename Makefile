# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 13:33:56 by gcoqueir          #+#    #+#              #
#    Updated: 2023/05/31 17:00:10 by gcoqueir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
FILES = ft_printf.c print_char.c print_str.c print_ptr.c print_nbr.c \
			print_unint.c print_hex.c
OBJS = $(FILES:.c=.o)
NAME = libftprintf.a

all: $(NAME)
	@echo SUCCESS!!

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: all

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all bonus clean fclean re rebonus