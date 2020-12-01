NAME = sample

OBJS = sample.o

CC = g++

.PHONY: clean all

all: ${NAME}

${NAME}: ${OBJS}

clean: 
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all