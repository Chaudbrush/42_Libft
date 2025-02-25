# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/23 17:39:54 by vloureir          #+#    #+#              #
#    Updated: 2025/02/23 19:44:34 by vloureir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
NAME := libft.a
SOURCE := ft_atoi.c ft_strlen.c ft_strcmp.c
OBJECTS := $(SOURCE:.c=.o)
RM := rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $@ $^

%.o: %.c
	$(CC) -c -o $@ $<

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
