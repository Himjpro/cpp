# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 18:41:41 by mjafari           #+#    #+#              #
#    Updated: 2022/09/14 22:29:00 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

SRC = Contact.cpp main.cpp PhoneBook.cpp

all: $(NAME)

$(NAME):
	clang++ -g -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
