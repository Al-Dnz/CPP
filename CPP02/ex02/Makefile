NAME = prog

SRCS =	main.cpp \
		Fixed.cpp \

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

OBJ = $(SRCS:.cpp=.o)

all:
	@$(MAKE)  $(NAME)

$(NAME): $(OBJ)
	${CXX} $(CXXFLAGS) $(OBJ) -o $(NAME) 
	@echo "\033[0;32m=> $(NAME) well created ! <=\033[0m"

clean:
	@rm -rf $(OBJ)
	@echo "\033[0;31m=> $(NAME) obj deleted <=\033[0m"

fclean:	clean
	@rm -rf $(NAME)
	@echo "\033[0;31m=> $(NAME) deleted <=\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re

