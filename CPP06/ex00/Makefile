NAME = convert

SRCS =	main.cpp \
		parse_util.cpp \
		displayer_util.cpp \
		switch_util.cpp \

INC = header.hpp

CC = clang++

CFLAGS = -std=c++98 -Wall -Werror -Wextra

OBJ = $(SRCS:.cpp=.o)

.c.o:
	${CC} ${CFLAGS} -c$< -o ${<:.c=.o}

all:
	@$(MAKE) -s $(NAME)

$(NAME): $(OBJ)
	${CC} $(CFLAGS) -I $(INC) $(OBJ) -o $(NAME) 
	@echo "\033[0;32m=> $(NAME) well created ! <=\033[0m"

clean:
	@rm -rf $(OBJ)
	@echo "\033[0;31m=> $(NAME) obj deleted <=\033[0m"

fclean:	clean
	@rm -rf $(NAME)
	@echo "\033[0;31m=> $(NAME) deleted <=\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re

