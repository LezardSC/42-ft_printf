# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 15:16:11 by jrenault          #+#    #+#              #
#    Updated: 2022/11/25 11:26:09 by jrenault         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libftprintf.a

SRCS = ft_printf.c search_arg.c ispercent_c.c ispercent_d_i.c ispercent_u.c ispercent_s.c ispercent_x.c ispercent_capx.c ispercent_p.c
OBJS = ${SRCS:.c=.o}

CC = gcc
FLAGS = -Wall -Wextra -Werror
HEAD = printf.h

LIB = ar rc

RM = rm -f

all:		${NAME} Makefile

%.o:		%.c ${HEAD} Makefile
			${CC} ${FLAGS} -I${HEAD} -c $< -o $@

${NAME}: 	${OBJS} Makefile
			make -C libft
			cp libft/libft.a ./libftprintf.a
			${LIB} ${NAME} ${OBJS} libftprintf.a

clean:
			${RM} ${OBJS}
			$(MAKE) clean -C libft 

fclean:		clean
			${RM} ${NAME}
			$(MAKE) fclean -C libft
			${RM} libft.a

re:			fclean all
