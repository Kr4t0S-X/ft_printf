# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/20 18:38:35 by cghanime          #+#    #+#              #
#    Updated: 2019/04/06 12:33:29 by cghanime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ft_printf
CC := gcc
FLAGS := -Wall -Wextra -Werror
SRCS :=		srcs/ft_printf.c \
			srcs/ft_p_functions.c \
			srcs/ft_p_functions_2.c \
			srcs/ft_printf_aff.c \
			srcs/ft_printf_aff_2.c \
			srcs/ft_printf_get.c \
			srcs/ft_printf_get_2.c \
			srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_strlen.c \
			srcs/ft_putnbr.c \
			srcs/ft_putnbr_base.c \
			srcs/ft_itoa_base.c \
			srcs/main_printf.c \

OBJ := $(SRCS:.c=.o)
#LIBFT := libft/libft.a

all : $(NAME)

$(NAME) : $(OBJ)
#	make -C libft
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) #$(LIB)

#libft : 
#	make -C ./libft/

%.o : ./srcs/%.c
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	rm -f srcs/*.o

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : libft all clean fclean re
