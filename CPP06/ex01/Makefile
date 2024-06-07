# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 15:56:28 by mgiovana          #+#    #+#              #
#    Updated: 2024/06/05 12:45:33 by mgiovana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization
SRC = main.cpp Serializer.cpp
OBJ_DIR = ./.obj/
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJP = $(addprefix $(OBJ_DIR),$(notdir $(SRC:.cpp=.o)))

all: $(NAME)

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJP)
	@$(CC) $(CFLAGS) $(OBJP) -o $(NAME)
	@echo "Compiled"

clean:
	@echo "Cleaning objects"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "Removing $(NAME)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
