# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grmartir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/15 21:50:00 by grmartir          #+#    #+#              #
#    Updated: 2023/06/15 21:50:04 by grmartir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap
BONUS			= checker
SRC_DIR 		= src
SRCS			= $(wildcard $(SRC_DIR)/*.c)
MAIN_SRCS		= $(filter-out $(SRC_DIR)/checker_main.c, $(SRCS))
B_SRCS			= $(filter-out $(SRC_DIR)/main.c, $(SRCS))
HEADERS			= $(wildcard includes/*.h)
OBJ_DIR			= obj/main
B_OBJ_DIR		= obj/checker
OBJ_ROOT_DIR	= obj
INCS			= -Iincludes
MAIN_OBJS		= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(MAIN_SRCS))
B_OBJS			= $(patsubst $(SRC_DIR)/%.c, $(B_OBJ_DIR)/%.o, $(B_SRCS)) 
CC				= cc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror
MK				= mkdir -p

all:			$(OBJ_DIR) $(NAME)

$(OBJ_DIR): $(SRC_DIR)
	$(MK) $(OBJ_DIR)

$(B_OBJ_DIR): $(SRC_DIR)
	$(MK) $(B_OBJ_DIR)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) $(INCS) -DPRINT_OUT -c $< -o $@

$(B_OBJ_DIR)/%.o:	$(SRC_DIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

$(NAME):		$(MAIN_OBJS)
				$(CC) $(CFLAGS) $(INCS) -o $(NAME) $(MAIN_OBJS)

bonus: $(B_OBJ_DIR) $(OBJ_DIR) 	$(BONUS)

$(BONUS):	$(B_OBJS)
	$(CC) $(CFLAGS) $(INCS) -o $(BONUS) $(B_OBJS)

clean:			
				$(RM) $(OBJ_ROOT_DIR) $(B_OBJ_DIR)

fclean:			clean
				$(RM) $(NAME)
				$(RM) $(BONUS)

re:				fclean all bonus

.PHONY:			all clean fclean re bonus

# test:			$(NAME)	
# 				$(eval ARG = $(shell jot -r 5 0 2000000))
# 				@echo -n "Instructions: "
# 				@./push_swap $(ARG) | wc -l
#				# ./push_swap $(ARG)

# test_my:		$(NAME)	$(BONUS_NAME)
# 				$(eval ARG = $(shell jot -r 500 0 2000000))
# 				./push_swap $(ARG) | ./checker $(ARG)
# 				@echo -n "Instructions: "
# 				@./push_swap $(ARG) | wc -l
#				./push_swap $(ARG)

