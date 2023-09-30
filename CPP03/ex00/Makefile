# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 17:44:23 by aselnet           #+#    #+#              #
#    Updated: 2023/09/30 18:58:29 by aselnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ClapTrap

DEPS		=	${OBJS:.o=.d}

CORE		= 	main.cpp\
				ClapTrap.cpp\

SRCS		=	${CORE}

OBJS		=	${SRCS:.cpp=.o}

RM			=	rm -f

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

all			: ${NAME}

%.o: %.c
		@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}		: ${OBJS}
		@echo "\033[34m----Compiling----"
		@${CC} ${FLAGS} ${OBJS} -o ${NAME}
		@echo "OK\033[0m"

clean		:
		@echo "\033[31m----Cleaning objects----"
		@${RM} ${OBJS} ${DEPS}
		@echo "OK\033[0m"

fclean		: clean
		@echo "\033[33m----Cleaning all----"
		@${RM} ${NAME}
		@echo "OK\033[0m"

re			: fclean all

.PHONY		: all clean fclean re

-include $(DEPS)