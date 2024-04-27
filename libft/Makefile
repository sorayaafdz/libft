# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 15:37:59 by sofernan          #+#    #+#              #
#    Updated: 2024/04/17 15:23:24 by sofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlen.c ft_isalpha.c ft_strchr.c\
	  ft_isprint.c ft_memset.c ft_strncmp.c ft_bzero.c ft_isascii.c ft_memcpy.c\
	  ft_toupper.c ft_tolower.c ft_memchr.c ft_strrchr.c ft_memcmp.c ft_itoa.c\
	  ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_atoi.c\
	  ft_calloc.c ft_strnstr.c ft_striteri.c ft_strlcpy.c ft_strdup.c ft_substr.c\
	  ft_strjoin.c ft_strlcat.c ft_strtrim.c ft_strmapi.c ft_split.c

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
			ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

BONUSOBJ = $(BONUS_SRC:.c=.o)

BONUS_CACHE = .bonus

all: $(NAME)

$(NAME): $(OBJ) 
	$(LIB) $(NAME) $(OBJ)

$(BONUS_CACHE): $(BONUSOBJ) 
	$(LIB) $(NAME) $(BONUSOBJ)
	touch $(BONUS_CACHE)

bonus: $(BONUS_CACHE)
	
clean:
	$(RM) $(OBJ) $(BONUSOBJ) $(BONUS_CACHE)
	$(RM) *.swp 
	$(RM) .DS_Store 

fclean: clean
	$(RM) $(NAME)

re: fclean all 
	
.PHONY: all bonus clean fclean re
