# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 15:16:11 by jrenault          #+#    #+#              #
#    Updated: 2022/11/21 15:20:19 by jrenault         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libftprintf.a

SRCS = ft_printf.c
OBJS = ${SRCS:.c=.o}

CC = gcc
FLAGS = -Wall -Wextra -Werror
SANITFLAG = -Wall -Wextra -Werror -g -fsanitize=address
HEAD = libftprintf.h

LIB = ar rc

RM = rm -f

%.o:		%.c ${HEAD} Makefile
			${CC} ${FLAGS} -I${HEAD} -c $< -o $@

${NAME}: 	${OBJS} Makefile
			${LIB} ${NAME} ${OBJS}

sanit:		$(OBJS) main.c
			${CC} ${SANITFLAG} $(OBJS) main.c

all:		${NAME} Makefile

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
