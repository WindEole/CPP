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

NAME	=	phonebook

INC		=	Includes

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I $(INC)
RM		=	/usr/bin/rm -rf

vpath %.c Srcs

SRC		=	Srcs/Phonebook.class.cpp \
			Srcs/main.cpp \
#			Srcs/Contact.class.cpp \


OBJ		=	$(SRC:Srcs/%.cpp=Objs/%.o)


all			:	obj $(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(SRC)

obj			:
				mkdir -p Objs

Objs/%.o	:	Srcs/%.cpp
				$(CC) -o $@ -c $< $(CFLAGS)

clean		: 
				$(RM) $(OBJ)
				$(RM) Objs

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
