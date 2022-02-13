# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 18:19:20 by jtrauque          #+#    #+#              #
#    Updated: 2022/01/09 17:21:35 by plouvel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	launch

FRMWK_DIR		=	../framework

SRCS			=	main.c										\
					ft_str_replace_letter/00_launcher.c			\
					ft_str_replace_letter/01_simple_test.c		\
					ft_str_replace_letter/02_negative_index.c	\
					ft_str_replace_letter/03_null_ptr.c			\
					ft_str_replace_letter/04_dumb_programmer.c					
SRC_DIR			=  

OBJ_DIR			= objs/

OBJS			= $(addprefix $(OBJ_DIR), ${SRCS:.c=.o})

DIR				= $(sort $(dir $(OBJS)))

DEP				= ${OBJS:.o=.d}

CC				= cc

#../framework/libunit.a
CFLAGS			= -I $(FRMWK_DIR)/libft/includes/ -I $(FRMWK_DIR) -I. -Wall -Wextra -Werror -MMD

LDFLAGS			= -L $(FRMWK_DIR) -lunit

RM				= rm -rf

MAKE			+= --no-print-directory

all:
				@${MAKE} -C $(FRMWK_DIR)
				@${MAKE} -j ${NAME}

test:				${NAME}
				@-./${NAME}

$(NAME):		${OBJS} $(FRMWK_DIR)/libunit.a
				@${CC} -o $@ ${OBJS} ${CFLAGS} ${LDFLAGS}
				@printf "\033[32mAll done. Please execute :)\033[0m\n"

$(DIR):    
				@mkdir -p $@

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c | $(DIR)
				$(CC) -c $< -o $@ ${CFLAGS}

$(FRMWK_DIR)/libunit.a:
				@${MAKE} -C $(FRMWK_DIR)
clean:   
				@echo "Cleaning files..."
				@${RM} ${OBJ_DIR}
				@${MAKE} -C $(FRMWK_DIR) clean
				@printf "\033[32mClean done !\033[0m\n"

fclean:			clean
				@echo "Cleaning the rest..."
				@${RM} ${NAME}
				@${MAKE} -C $(FRMWK_DIR) fclean
				@printf "\033[32mFClean done !\033[0m\n"

re:				fclean 
				@${MAKE} all
bonus:
				@${MAKE} -C $(FRMWK_DIR) bonus
				@${MAKE} -j ${NAME}

-include		${OBJS:.o=.d}

.PHONY:			bonus all test clean fclean re
