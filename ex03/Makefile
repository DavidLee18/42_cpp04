SOURCE := main.cpp AMateria.cpp IceMateria.cpp CureMateria.cpp Character.cpp MateriaSource.cpp Vec.cpp

NAME := interface_and_recap

all: $(NAME)

$(NAME): $(SOURCE)
	c++ -Wall -Wextra -Werror -std=c++98 $(SOURCE) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
