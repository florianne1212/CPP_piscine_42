NAME		= whatever

SRCS		= ./main.cpp \

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

FLAGS		= -Wall -Wextra -Werror -std=c++98

COMPILER	= clang++

.cpp.o:
	$(COMPILER) $(FLAGS) -c $< -o $@ 

${NAME}: ${OBJS}
		${COMPILER} ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all