CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = Zoo
RM = rm -rf

SR_PATH = ./
OBJ_DIR = ./obj/

SR =	main.cpp	\
			Animal.cpp	\
			WrongAnimal.cpp	\
			Cat.cpp	\
			WrongCat.cpp	\
			Dog.cpp	\
			Brain.cpp

SRC = $(addprefix ${SR_PATH}, ${SR})
OBJ = $(addprefix ${OBJ_DIR}, ${SR:.cpp=.o})

all: $(NAME)

${OBJ_DIR}%.o : ${SR_PATH}%.cpp
	@mkdir -p ${OBJ_DIR}
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}
	${RM} -r ${OBJ_DIR}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re