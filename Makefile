#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/12/04 10:46:21 by rbelin            #+#    #+#             *#
#*   Updated: 2015/12/07 04:33:40 by rbelin           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#
NAME=		libft.a
CC=		gcc
CFLAGS=		-Wall -Wextra -Werror

SOURCES=	$(shell ls -1 | grep "\.c");
OBJECTS=	$(shell ls -1 | grep "\.o");

all: $(NAME)

$(NAME): MAKE_OBJ MAKE_LIB

MAKE_OBJ:
	$(CC) $(CFLAGS) -c $(SOURCES)

MAKE_LIB:
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
