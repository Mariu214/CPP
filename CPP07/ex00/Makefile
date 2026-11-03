SRC =	main.cpp

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -MMD -MP -std=c++98
NAME = swap
OBJ_DIR = objets

DEPS = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.d))
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -g $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) 
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)
