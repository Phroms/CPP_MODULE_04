# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 17:41:12 by agrimald          #+#    #+#              #
#    Updated: 2024/09/02 17:59:53 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
CYAN = \033[96m
RED = \033[91m
END_COLOR = \033[0m

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
INC = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		 @echo "$(CYAN)\nCompiling!!!\n$(END_COLOR)"
		 $(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp $(INC) Makefile
		 $(CPP) $(CPPFLAGS) -c $< -o $@

fclean:  clean
		 $(RM) $(NAME) $(OBJECTS)

clean:
		 @echo "$(RED)\nRemoving!!!\n$(END_COLOR)"
		 $(RM) $(OBJECTS)

re: clean fclean all

.PHONY: re clean fclean all
