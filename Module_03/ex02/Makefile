# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iderighe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 10:48:36 by iderighe          #+#    #+#              #
#    Updated: 2022/06/14 10:48:40 by iderighe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fragtrap

INC		=	Includes

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I $(INC)
CFA		=	-fsanitize=address -g3
RM		=	/usr/bin/rm -rf

vpath %.c Srcs

SRC		=	Srcs/main.cpp \
			Srcs/ClapTrap.cpp \
			Srcs/ScavTrap.cpp \
			Srcs/FragTrap.cpp \

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

fsa			:	fclean obj $(OBJ)
				$(CC) $(CFLAGS) $(CFA) -o $(NAME) $(SRC)

re			:	fclean all

.PHONY		:	all obj clean fclean fsa re
