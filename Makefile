# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arbaboom <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 16:55:24 by arbaboom          #+#    #+#              #
#    Updated: 2022/04/05 16:55:38 by arbaboom         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	$(wildcard *.c)

SRCS_B =	\

OBJS		= ${SRCS:.c=.o}

OBJS_B		= ${SRCS_B:.c=.o}
		
CC			= cc
RM			= rm -f
AR			= ar rcs
CFLAGS		= -Wall -Wextra -Werror

NAME		= libftprintf.a

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:			
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${OBJS} ${OBJS_B}
			${AR} ${NAME} ${OBJS} ${OBJS_B}

.PHONY:		all clean fclean re bonus
