# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 17:16:24 by plouvel           #+#    #+#              #
#    Updated: 2022/01/09 16:45:55 by plouvel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR	=	./

OBJS_DIR	=	objs/

SRCS		=	libunit.c		\
				utils.c

SRCS_BONUS	=	libunit_bonus.c	\
				utils_bonus.c

OBJS		=	$(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

OBJS_BONUS	=	$(addprefix $(OBJS_DIR), $(SRCS_BONUS:.c=.o))

CFLAGS		=	-Wall -Werror -Wextra -I libft/includes

CC			=	cc

NAME		=	libunit.a

RM			=	rm -rf

$(NAME):		ft $(OBJS)
				cp libft/libft.a $(NAME)
				ar r $(NAME) $(OBJS)
				ranlib $(NAME)

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
				@mkdir -p $(OBJS_DIR)
				$(CC) $(CFLAGS) -c $< -o $@
ft:
				make -C libft all

all:			$(NAME)

clean:
				$(RM) $(OBJS_DIR)
				make -C libft fclean
fclean:			clean
				$(RM) $(NAME)

re:				fclean all

bonus:			ft $(OBJS_BONUS)
				cp libft/libft.a $(NAME)
				ar r $(NAME) $(OBJS_BONUS)
				ranlib $(NAME)

.PHONY:			ft all clean fclean bonus re
