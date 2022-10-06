# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valentin <valentin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 20:14:31 by valentin          #+#    #+#              #
#    Updated: 2022/10/06 12:39:28 by valentin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME2 = checker

C_FILES = push_swap.c mediane.c sort.c check.c utils.c orders.c orders2.c orders3.c \
			 sort2.c pars_arg.c optimise_check.c optimise_check2.c optimise_utils.c \
			optimise_utils2.c utils2.c

SRC_DIR		=	./src/

CHECKER_DIR		=	./_checker/

CHECKER_SRC = checker.c orders.c orders2.c orders3.c utils.c check.c get_next_line.c \
				check2.c check3.c exec.c pars_arg.c

DIR_OBJ = objs/

DIR_OBJ2 = objs2/

OBJS = ${C_FILES:%.c=$(DIR_OBJ)%.o}

OBJS2 = ${CHECKER_SRC:%.c=$(DIR_OBJ2)%.o}

INCS	= -I ./includes/

CFLAGS += -Wall -Wextra -Werror
LIBSFLAGS	=  libft/libft.a ft_printf/libftprintf.a

CC		= gcc
RM		= rm -f

$(NAME): ${OBJS} maker
		@$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LIBSFLAGS)
		@echo " [ OK ] Push_swap is ready"		

$(NAME2): ${OBJS2} maker
		@$(CC) -o $(NAME2) $(OBJS2) $(CFLAGS) $(LIBSFLAGS)
		@echo " [ OK ] Checker is ready"	

$(DIR_OBJ)%.o : $(SRC_DIR)%.c
		@mkdir -p $(DIR_OBJ)
		@$(CC) $(CFLAGS) -c $< -o $@ $(INCS)
		@echo " [ OK ] "

$(DIR_OBJ2)%.o : $(CHECKER_DIR)%.c
		@mkdir -p $(DIR_OBJ2)
		@$(CC) $(CFLAGS) -c $< -o $@ $(INCS)
		@echo " [ OK ] "

all: ${NAME} ${NAME2}

bonus: ${NAME} ${NAME2}

maker:
		@make -C libft
		@make -C ft_printf

clean:
		@${RM} -rf ${DIR_OBJ}
		@${RM} -rf ${DIR_OBJ2}
		@make clean -C libft
		@make clean -C ft_printf

fclean:	clean
		@make fclean -C libft
		@make fclean -C ft_printf
		@${RM} ${NAME}
		@${RM} ${NAME2}

re:		fclean all

norm:
	norminette $(SRC_DIR)*.c $(CHECKER_DIR)*.c includes/*.h 