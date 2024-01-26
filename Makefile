# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 12:50:40 by pemarti2          #+#    #+#              #
#    Updated: 2024/01/25 16:19:52 by pemarti2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft
CFLAGS := -Wall -Werror -Wextra
CC := gcc
SRCS := $(wildcard *.c)
OBJECTS := $(SRCS:.c=.o)

all: libft.a

libft.a: $(OBJECTS)
	ar rcs libft.a $(OBJECTS)

test: main.o libft.a
	$(CC) $(CFLAGS) main.o -o test -L. -lft

%.o : %.c Makefile libft.h
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f *.o test *.a
.PHONY:
	all clean
