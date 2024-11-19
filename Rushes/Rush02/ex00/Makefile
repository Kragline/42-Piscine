# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armarake <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/03 13:49:22 by armarake          #+#    #+#              #
#    Updated: 2024/11/03 13:49:27 by armarake         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = src/main.c src/ft_util.c src/process.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
