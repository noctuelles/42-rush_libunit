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
					ft_strlen/00_launcher.c						\
					ft_strlen/01_basic_test.c					\
					ft_strlen/02_long_test.c					\
					ft_strlen/03_empty_test.c					\
					ft_strlcat/00_launcher.c					\
					ft_strlcat/01_basic_strlcat_test.c			\
					ft_strlcat/02_undersized_test.c				\
					ft_strlcat/03_zerosized_test.c				\
					ft_strlcpy/00_launcher.c					\
					ft_strlcpy/01_basic_strlcpy_test.c			\
					ft_strlcpy/02_undersized_strlcpy_test.c		\
					ft_strlcpy/03_zerosized_strlcpy_test.c		\
					ft_strchr/00_launcher.c						\
					ft_strchr/01_basic_strchr_test.c			\
					ft_strchr/02_notfound_test.c				\
					ft_strchr/03_terminator_test.c				\
					ft_strncmp/00_launcher.c					\
					ft_strncmp/01_basic_strncmp_test.c			\
					ft_strncmp/02_diff_strncmp_test.c			\
					ft_strncmp/03_short_test.c					\
					ft_strncmp/04_empty_string.c				\
					ft_strncmp/05_oversized_compare.c

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

.PHONY:			bonus all clean fclean re test
