# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 12:35:17 by tiskow            #+#    #+#              #
#    Updated: 2016/11/14 08:29:47 by tiskow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
DNAME = libft.o
SRCS= $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)
HEADER = -I ./includes/
CC = gcc -c
CFLAGS = -Wall -Werror -Wextra -fPIC
DFLAGS = -fPIC -shared
AR = ar rc
ARQ = ar -q

$(NAME):
	$(CC) $(HEADER) $(CFLAGS) $(SRCS)
	$(AR) $(NAME) $(OBJS)
	@(ranlib $(NAME))

all: $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all