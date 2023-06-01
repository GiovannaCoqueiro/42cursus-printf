# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 13:33:56 by gcoqueir          #+#    #+#              #
#    Updated: 2023/06/01 10:36:06 by gcoqueir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
INC = -I./include
SRCS_DIR = ./srcs
FILES = $(SRCS_DIR)/ft_printf.c $(SRCS_DIR)/print_char.c \
			$(SRCS_DIR)/print_str.c $(SRCS_DIR)/print_ptr.c \
			$(SRCS_DIR)/print_nbr.c $(SRCS_DIR)/print_unint.c \
			$(SRCS_DIR)/print_hex.c
OBJS = $(FILES:.c=.o)
NAME = libftprintf.a

all: $(NAME)
	@echo SUCCESS!!

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: all

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re