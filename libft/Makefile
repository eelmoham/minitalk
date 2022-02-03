# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 18:56:39 by eelmoham          #+#    #+#              #
#    Updated: 2021/11/17 18:51:09 by eelmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS=-Wall -Wextra -Werror
AR= ar rcs
RM =rm  -rf
FILES= ft_isdigit ft_memset ft_strjoin ft_isprint\
	ft_putchar_fd ft_strlcat ft_substr ft_atoi ft_itoa ft_putendl_fd\
	ft_strlcpy ft_tolower ft_bzero ft_putnbr_fd ft_strlen\
	ft_toupper ft_calloc ft_memchr ft_putstr_fd ft_strmapi ft_isalnum\
	ft_memcmp ft_strncmp ft_isalpha ft_memcpy ft_strchr\
	ft_strnstr ft_isascii ft_memmove ft_strdup ft_strrchr\
	ft_strtrim ft_striteri ft_split
BONUSFILES= ft_lstdelone ft_lstadd_front ft_lstadd_back ft_lstnew ft_lstsize\
	ft_lstlast ft_lstclear ft_lstiter ft_lstmap
SRC = $(FILES:=.c)
OBJ= $(FILES:=.o)
BONUSOBJS= $(BONUSFILES:=.o)
NAME =libft.a

.PHONY:all clean fclean re

all:$(NAME)
$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
bonus: ${BONUSOBJS}
	$(AR) $(NAME) $(BONUSOBJS)
%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)
	$(RM) $(BONUSOBJS)
fclean: clean
	$(RM) $(NAME)

re : fclean all