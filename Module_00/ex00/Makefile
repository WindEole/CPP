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

NAME	=	megaphone

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
CFA		=	-fsanitize=address -g3
RM		=	/usr/bin/rm -rf

SRC		=	megaphone.cpp

OBJ		=	$(SRC:%.cpp=objs/%.o)


all			:	obj $(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(SRC)

obj			:
				mkdir -p objs

objs/%.o	:	%.cpp
				$(CC) -o $@ -c $< $(CFLAGS)

clean		:
				$(RM) $(OBJ)
				$(RM) objs

fclean		:	clean
				$(RM) $(NAME)

fsa			:	fclean obj $(OBJ)
				$(CC) $(CFLAGS) $(CFA) -o $(NAME) $(SRC)

re			:	fclean all

.PHONY		:	all clean fclean re
