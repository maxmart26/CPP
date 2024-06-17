# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 16:14:20 by matorgue          #+#    #+#              #
#    Updated: 2024/05/24 16:14:59 by matorgue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		=	PhoneBook

SRC			=	tests.cpp\
				Account.cpp\

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

EXE_NAME	=	-o PhoneBook

EXEC		=	PhoneBook

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