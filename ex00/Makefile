NAME = zombie
CXX = g++ 
FLAGS = -std=c++98 -g
FLAGS += -Wall -Werror -Wextra
RM = rm -f

SRCS = main.cpp \
		Class.Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

#This line is used to automatically generate the list of object files
#based on the source file names

#SRCS is a variable that contains a list of source file names,
#such as Class.Zombie.cpp, Class.NewZombie.cpp, and Class.RandomChump.cpp.

#$(SRCS:.cpp=.o) is a substitution reference that performs a string substitution 
#on each element in SRCS. It replaces the .cpp extension with .o.

#Therefore, $(SRCS:.cpp=.o) expands to a list of object file names,
#such as Class.Zombie.o, Class.NewZombie.o, and Class.RandomChump.o.

#Finally, the assignment OBJS = $(SRCS:.cpp=.o) assigns the list of object file names 
#to the variable OBJS, which can be used later in the makefile.

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

#The linking step, where the executable is created
#to link the object files and create the executable with the specified name using the -o flag

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

#rule that describes how to compile a source file ($<) into an object file ($@)
#using the C++ compiler (${CXX}) and specified compiler flags (${FLAGS})

#-c: This is a command-line option for the compiler that specifies to generate 
#only the object file and not perform the linking step. 
#It tells the compiler to compile the source file into an object file.

#$<: This is an automatic variable that represents the first prerequisite (dependency)
#of the rule. In this case, it represents the source file that needs to be compiled.

#-o: This is a command-line option for the compiler that specifies the output file name.
#In this case, it specifies the name of the object file to be generated.

#$@: This is an automatic variable that represents the target of the rule.
#In this case, it represents the output file that is being built, which is the object file.

%.o : %.cpp
	$(CXX) -c $(FLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all	

.PHONY: all re clean fclean	