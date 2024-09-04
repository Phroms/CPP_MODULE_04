# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 18:49:42 by agrimald          #+#    #+#              #
#    Updated: 2024/09/03 19:18:42 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract_class
CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
CYAN = \033[96m
RED = \033[91m
END_COLOR = \033[0m

SRC = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		 @echo "$(CYAN)\nCompiling!!!\n$(END_COLOR)"
		 $(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS)

fclean:  clean
		 $(RM) $(NAME) $(OBJECTS) 

clean:
		 @echo "$(RED)\nRemoving!!!\n$(END_COLOR)"
		 $(RM) $(OBJECTS)

re: clean fclean all

.PHONY: all clean fclean re
