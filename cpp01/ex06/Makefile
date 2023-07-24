# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/02 15:48:59 by oelbouha          #+#    #+#              #
#    Updated: 2023/07/24 10:01:30 by oelbouha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := harlFilter

CC := c++

FLAGS := -std=c++98  -Wall -Wextra -Werror

SRC := Harl.cpp main.cpp
 
OBJ := $(SRC:.cpp=.o)
OBJ := $(addprefix obj/, $(OBJ))

all : $(NAME)

obj/%.o:%.cpp
	@mkdir -p obj
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) -o $@ $^

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)
	@rm -rf obj

re : fclean all

.phony: re all fclean clean
