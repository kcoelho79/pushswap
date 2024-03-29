# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 11:20:36 by kde-oliv          #+#    #+#              #
#    Updated: 2021/10/17 18:35:20 by kde-oliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap.a
SRCS	= $(wildcard *.c)
LFT		= ./libft/libft.a
OBJS	= $(SRCS:.c=.o)
CC		= cc
RM		= rm -f
CFLAGS 	= -Wall -Wextra -Werror -g
LFLAGS	= -I.

all		:		$(LFT) $(NAME)

$(NAME)	:		$(OBJS)
				ar rcs $(NAME) $(OBJS)
				ranlib $(NAME)
				$(CC) $(FLAGS) $(NAME) -I ./libft -L ./libft -lft -o push_swap


%.o:	%.c
				$(CC) $(FLAGS) -c $< -o $@ $(LFLAGS) -I ./libft

$(LFT)	:
				@echo " [ .. ] | Compiling libft.."
				@make -s -C libft
				@echo " [ OK ] | libft ready!"

clean	:
				$(RM) $(OBJS)
				@make -s -C libft clean
				@echo "objects files removed."


fclean	:		clean
				@make fclean -C libft
				$(RM) $(NAME) push_swap
				@echo "objects program removed."


re		:		fclean all
				make -s -C libft fclean

.PHONY	:		all clean fclean re