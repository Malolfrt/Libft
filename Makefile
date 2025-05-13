# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:09:58 by mlefort           #+#    #+#              #
#    Updated: 2024/02/29 16:59:08 by mlefort          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g3

OBJ_PATH	= obj/
SRC_PATH	= ./

SRC_FILES	=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_printf/ft_printf.c \
				ft_printf/ft_printf_utils.c \
				Get_Next_line/get_next_line_utils.c \
				Get_Next_line/get_next_line.c

SRC_FILES_BONUS	=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c
					
OBJ_FILES	= $(SRC_FILES:.c=.o)
OBJ_FILES_BONUS	= $(SRC_FILES_BONUS:.c=.o)
OBJS	= $(addprefix $(OBJ_PATH), $(OBJ_FILES))
OBJS_BONUS	= $(addprefix $(OBJ_PATH), $(OBJ_FILES_BONUS))

all: $(OBJ_PATH) ${NAME}

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}


bonus : ${OBJ_PATH} ${OBJS_BONUS}
		ar rcs ${NAME} ${OBJS_BONUS} ${OBJS}

clean:
	rm -rf *.o $(OBJ_PATH)
	

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re