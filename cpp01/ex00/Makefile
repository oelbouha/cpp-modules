# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/02 15:48:59 by oelbouha          #+#    #+#              #
#    Updated: 2023/06/16 15:20:15 by oelbouha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CC := c++

FLAGS := -std=c++98  -Wall -Wextra -Werror

SRC := randomChump.cpp newZombie.cpp Zombie.cpp main.cpp

OBJ := $(SRC:.cpp=.o)

all : $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony: re all fclean clean
