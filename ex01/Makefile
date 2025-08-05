SOURCE := main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

NAME := i_dont_want_to_set_the_world_on_fire

all: $(NAME)

$(NAME): $(SOURCE)
	c++ -Wall -Wextra -Werror -std=c++98 $(SOURCE) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
