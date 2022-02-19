NAME = convert

SRCS =	main.cpp \
		parse_util.cpp \
		displayer_util.cpp \
		switch_util.cpp \

INC = header.hpp

CCXX = clang++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra -g -fstandalone-debug

OBJ = $(SRCS:.cpp=.o)

all:
	@$(MAKE)  $(NAME)

$(NAME): $(OBJ)
	${CCXX} $(CXXFLAGS) -I $(INC) $(OBJ) -o $(NAME) 
	@echo "\033[0;32m=> $(NAME) well created ! <=\033[0m"

clean:
	@rm -rf $(OBJ)
	@echo "\033[0;31m=> $(NAME) obj deleted <=\033[0m"

fclean:	clean
	@rm -rf $(NAME)
	@echo "\033[0;31m=> $(NAME) deleted <=\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re

