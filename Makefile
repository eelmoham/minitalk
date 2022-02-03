# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 14:37:19 by eelmoham          #+#    #+#              #
#    Updated: 2022/01/10 16:02:50 by eelmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: server client

server: server.c libft minitalk.h
	$(CC) $(CFLAGS) server.c ./libft/libft.a -o server 

client: client.c libft minitalk.h
	$(CC) $(CFLAGS) client.c ./libft/libft.a -o client 

bonus: libft ./bonus/client_bonus.c ./bonus/server_bonus.c ./bonus/minitalk_bonus.h
	$(CC) $(CFLAGS) ./bonus/server_bonus.c ./libft/libft.a -o ./bonus/server_bonus
	$(CC) $(CFLAGS) ./bonus/client_bonus.c ./libft/libft.a -o ./bonus/client_bonus

libft:
	make -C libft

clean:
	make -C libft clean
	
fclean: clean
	rm -f server client libft/libft.a ./bonus/server_bonus ./bonus/client_bonus

re: fclean all

.PHONY: all bonus libft clean fclean re