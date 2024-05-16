# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 11:44:01 by flmarsou          #+#    #+#              #
#    Updated: 2024/05/13 15:44:54 by flmarsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_calloc.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memset.c \
	   ft_memmove.c \
	   ft_putchar_fd.c \
	   ft_putendl_fd.c \
	   ft_putstr_fd.c \
	   ft_putnbr_fd.c \
	   ft_split.c \
	   ft_strchr.c \
	   ft_strdup.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strlen.c \
	   ft_strmapi.c \
	   ft_strncmp.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strtrim.c \
	   ft_substr.c \
	   ft_tolower.c \
	   ft_toupper.c

SRCS_BONUS = ft_lstadd_front.c \
			 ft_lstlast.c \
			 ft_lstadd_back.c \
			 ft_lstnew.c \
			 ft_lstdelone.c \
			 ft_lstiter.c \
			 ft_lstclear.c \
			 ft_lstsize.c \
			 ft_lstmap.c

SRCS_ALL = ${SRCS} ${SRCS_BONUS}

OBJS = ${SRCS:.c=.o}
OBJS_ALL = ${SRCS_ALL:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

DEF_COLOR = \033[0;39m
COLOR = \033[1;32m

all:		${LIB}

%.o:		%.c
		@${CC} ${CFLAGS} -c $? -o $@
		@echo "${COLOR}$?		✓${DEF_COLOR}"

${LIB}:	${OBJS}
		@ar rcs $@ $?
		@echo "${COLOR}╔═══════════════════════╗${DEF_COLOR}"
		@echo "${COLOR}║    Libft compiled!    ║${DEF_COLOR}"
		@echo "${COLOR}╚═══════════════════════╝${DEF_COLOR}"

bonus:	${OBJS_ALL}
		@ar rcs ${LIB} $?
		@echo "${COLOR}╔═══════════════════════╗${DEF_COLOR}"
		@echo "${COLOR}║    Bonus compiled!    ║${DEF_COLOR}"
		@echo "${COLOR}╚═══════════════════════╝${DEF_COLOR}"

clean:
		@${RM} ${OBJS_ALL}
		@echo "${COLOR}╔═══════════════════════╗${DEF_COLOR}"
		@echo "${COLOR}║    Libft  cleaned!    ║${DEF_COLOR}"
		@echo "${COLOR}╚═══════════════════════╝${DEF_COLOR}"

fclean:		clean
		@${RM} ${LIB}

re:			fclean all

.PHONY: all clean fclean re
