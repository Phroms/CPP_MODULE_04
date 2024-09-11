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

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
INC = AMateria.hpp  Character.hpp  Cure.hpp  Ice.hpp IMateriaSource.hpp \
		MateriaSource.hpp ICharacter.hpp

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
