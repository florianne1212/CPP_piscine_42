NAME		= phonebook

SRCS		= ./main.cpp \
				./contact.cpp \
				./manage.cpp \

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

FLAGS		= -Wall -Wextra -Werror -std=c++98

COMPILER	= clang++

${NAME}: ${OBJS}
		${COMPILER} ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all