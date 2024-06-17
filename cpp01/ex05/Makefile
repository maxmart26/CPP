# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 09:50:43 by matorgue          #+#    #+#              #
#    Updated: 2024/05/29 09:51:10 by matorgue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		=	Harl

SRC			=	main.cpp\
				Harl.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

EXE_NAME	=	-o Harl

EXEC		=	Harl

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