NAME = zombie

SRCS =	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp \
		
INC = Zombie.hpp 

CXX = c++

CXXFLAGS =  -Wall -Werror -Wextra -std=c++98

OBJ = $(SRCS:.cpp=.o)

all:
	@$(MAKE)  $(NAME)

$(NAME): $(OBJ)
	${CXX} $(CXXFLAGS) -I $(INC) $(OBJ) -o $(NAME) 
	@echo "\033[0;32m=> $(NAME) well created ! <=\033[0m"

clean:
	@rm -rf $(OBJ)
	@echo "\033[0;31m=> $(NAME) obj deleted <=\033[0m"

fclean:	clean
	@rm -rf $(NAME)
	@echo "\033[0;31m=> $(NAME) deleted <=\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re

