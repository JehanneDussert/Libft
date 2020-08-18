# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 08:57:55 by jdussert          #+#    #+#              #
#    Updated: 2020/08/14 10:01:04 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3

SRCS	= ft_memset.c ft_bzero.c ft_strlen.c ft_toupper.c ft_tolower.c \
		  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
		  ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		  ft_isascii.c ft_isprint.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
		  ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
		  ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_split.c ft_strmapi.c
		  
SRCS_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			  ft_lstmap.c

SRCS_ADD	= ft_itoa_base.c ft_last.c ft_int_len.c ft_first.c ft_ref_parse.c \
			  ft_sqrt.c ft_free.c ft_memalloc.c

OBJS	= ${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

OBJS_ADD	= ${SRCS_ADD:.c=.o}

NAME	= libft.a

$(NAME) : ${OBJS}
	ar rcs ${NAME} ${OBJS} 
	ranlib ${NAME}

all : ${NAME} ${OBJS_BONUS} ${OBJS_ADD}
	ar rcs ${NAME} ${OBJS} ${OBJS_BONUS} ${OBJS_ADD}
	ranlib ${NAME}

bonus	: ${OBJS} ${OBJS_BONUS}
	ar rcs ${NAME} ${OBJS} ${OBJS_BONUS}
	ranlib ${NAME}

clean :
	rm -f ${OBJS} ${OBJS_BONUS} ${OBJS_ADD}

fclean : clean
	rm -f ${NAME}

re : fclean all
