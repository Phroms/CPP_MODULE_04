# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 18:37:53 by agrimald          #+#    #+#              #
#    Updated: 2024/09/04 18:37:54 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMteria
CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
CYAN = \033[96m
RED = \033[91m
END_COLOR = \033[0m

SRC = main.cpp AMateria.cpp

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

.PHONY: re clean fclean all