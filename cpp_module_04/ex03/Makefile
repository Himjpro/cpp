# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 19:19:21 by mjafari           #+#    #+#              #
#    Updated: 2022/10/20 20:56:40 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

FLAGS = clang++ -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	$(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
