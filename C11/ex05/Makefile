# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svalenti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 11:12:23 by svalenti          #+#    #+#              #
#    Updated: 2020/11/12 11:19:59 by svalenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ./*.c}
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= do-op

.c.o :	
			${CC} -I ${CFLAGS} -c $< -o ${<:.c=.o}
all :		${OBJS}
			${CC} -o ${NAME} ${OBJS}
clean :
			rm -f ${OBJS}
fclean :	clean
			rm -f ${NAME}
re :		fclean all
