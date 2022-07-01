# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iderighe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 15:29:55 by iderighe          #+#    #+#              #
#    Updated: 2022/06/04 15:29:57 by iderighe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombiehorde

INC		=	Includes

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I $(INC)
RM		=	/usr/bin/rm -rf

vpath %.c Srcs

SRC		=	Srcs/main.cpp \
			Srcs/Zombie.cpp \
			Srcs/zombieHorde.cpp \

OBJ		=	$(SRC:Srcs/%.cpp=Objs/%.o)


all			:	obj $(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(SRC)


obj			:
				@if [ ! -d "./Objs" ]; then\
					echo "mkdir -p Objs";\
					mkdir -p Objs;\
				fi
				@echo ""

Objs/%.o	:	Srcs/%.cpp
				$(CC) -o $@ -c $< $(CFLAGS)

clean		: 
				$(RM) $(OBJ)
				$(RM) Objs

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all obj clean fclean re

