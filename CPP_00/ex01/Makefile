NAME = AwesomePhoneBook
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp\
		Contact.cpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
		@echo "\033[93mCOMPILING..\033[0m"
		@$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
				@echo "\033[93m...\033[0m"
				@$(CC) -o $(NAME) $(OBJS)
				@echo "\033[92mFINISHED\033[0m"

all : $(NAME)

clean :
		@clear
		@rm -rf *.o
		@echo "\033[91m...\033[0m"

fclean : clean
		@clear
		@rm -rf *.o
		@rm -rf $(NAME)
		@echo "\033[91mFINISHED\033[0m"

re : fclean all

.PHONY: clean fclean re all