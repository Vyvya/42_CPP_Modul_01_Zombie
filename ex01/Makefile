NAME = zombiehorde
CXX = g++
FLAGS = -std=c++98 -g
FLAGS += -Werror -Wall -Wextra
RM = rm -f

SRCS = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME) 

%.o : %.cpp
	$(CXX) -c $(FLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re