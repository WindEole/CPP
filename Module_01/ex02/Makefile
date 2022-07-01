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

NAME	=	brain

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 #-I $(INC)
CFA		=	-fsanitize=address -g3
RM		=	/usr/bin/rm -rf

SRC		=	main.cpp \

OBJ		=	$(SRC:%.cpp=Objs/%.o)


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

fsa			:	fclean obj $(OBJ)
				$(CC) $(CFLAGS) $(CFA) -o $(NAME) $(SRC)

re			:	fclean all

.PHONY		:	all obj clean fclean fsa re

