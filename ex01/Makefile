# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 03:52:16 by mintkim           #+#    #+#              #
#    Updated: 2021/04/15 04:46:14 by mintkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCS	= includes
OBJS	= ${SRCS:.c=.o}
TARGET	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -c

all: $(TARGET)

.c.o: 
	${CC} ${CFLAGS} $< -o $@ -I ${INCS}

$(TARGET): $(OBJS)
	ar -rcs $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
