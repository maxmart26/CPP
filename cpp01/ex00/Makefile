# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 12:29:35 by matorgue          #+#    #+#              #
#    Updated: 2024/05/27 15:34:39 by matorgue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		=	Zombie

SRC			=	newZombie.cpp\
				randomChump.cpp\
				Zombie.cpp\
				main.cpp\

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

EXE_NAME	=	-o Zombie

EXEC		=	Zombie

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean