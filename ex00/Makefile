NAME = zombie
CXX = g++ 
FLAGS = -std=c++98 -g
FLAGS += -Wall -Werror -Wextra
RM = rm -f

SRCS = main.cpp \
		Class.Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

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

.PHONY: all re clean fclean	