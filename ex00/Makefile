################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := fixed
CC        := g++ -std=c++98
FLAGS    := -Wall -Wextra -Werror 
#HEADER = N/A 
OBJ_DIR = ./obj
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      $(wildcard *.cpp)

OBJS        = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

$(OBJ_DIR)/%.o: %.cpp #$(HEADER)
	@mkdir -p $(@D)
	@$(CC) -c $< -o $@ $(FLAGS)

################################################################################
#                                  Makefile  objs                              #
################################################################################

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -rf

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			@${CC} -o ${NAME} ${OBJS} ${FLAGS} 
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} $(OBJ_DIR) *.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME} *.out
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


