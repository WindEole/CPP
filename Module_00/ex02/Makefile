# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iderighe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 15:26:31 by iderighe          #+#    #+#              #
#    Updated: 2022/05/25 15:26:36 by iderighe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	account

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	/usr/bin/rm -rf

SRC		=	Account.cpp \
			tests.cpp \

OBJ		=	$(SRC:%.cpp=Objs/%.o)

# **************************************************************************** #

all			:	obj $(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(SRC)

obj			:
				@if [ ! -d "./Objs" ]; then\
					echo "mkdir -p Objs";\
					mkdir -p Objs;\
				fi
				@echo ""

Objs/%.o	:	%.cpp
				$(CC) -o $@ -c $< $(CFLAGS)

clean		: 
				$(RM) $(OBJ)
				$(RM) Objs

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all obj clean fclean re
