NAME = megaphone

# Colors
GREEN = \033[1;32m
PURPLE = \033[1;35m
CYAN = \033[1;36m
YELLOW = \033[1;33m
NC = \033[0m


# Headers
HEADER = ./

# Compiler and flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -I$(HEADER) -std=c++98 #-fsanitize=address

# SRCS Files and objs
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

# .cpp .o rule
%.o: %.cpp Makefile
	@printf "${YELLOW}-> Compiling: ${CYAN}$<${YELLOW}...${NC}"
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "${GREEN} OK!${NC}\n"

all:
	@make $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "${GREEN}-> $(NAME) executable compiled successfully${NC}\n"

clean:
	@$(RM) $(OBJS)
	@printf "${PURPLE}-> All $(NAME) objs files removed successfully${NC}\n"

fclean :
	@$(RM) $(NAME) $(OBJS)
	@printf "${PURPLE}-> $(NAME) executable and $(NAME) objs files removed successfully${NC}\n"

re: fclean all

.PHONY: all re fclean clean