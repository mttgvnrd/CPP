# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 14:42:52 by mgiovana          #+#    #+#              #
#    Updated: 2024/02/01 14:42:56 by mgiovana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Zombie
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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