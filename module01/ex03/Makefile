SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJ_DIR = ./obj/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

CC = c++

INC = HumanA.hpp HumanB.hpp Weapon.hpp 

CFLAGS = -std=c++98 -Wall -Wextra -Werror


NAME = main

all : $(NAME)

$(NAME) :$(OBJ_DIR) $(OBJ)
	$(CC)  $(CFLAGS)  $(OBJ)  -o $(NAME)


$(OBJ_DIR)%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)
clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
