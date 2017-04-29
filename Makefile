# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbenning <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/29 12:30:47 by sbenning          #+#    #+#              #
#    Updated: 2017/04/29 16:57:25 by sbenning         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			ft_malloc.so

SRC =			ft_malloc.c

SRC_DIR =		srcs/

OBJ_DIR =		obj/

OBJ =			$(SRC:.c=.o)

COR_SRC =		$(addprefix $(SRC_DIR), %.c)

COR_OBJ =		$(addprefix $(OBJ_DIR), %.o)

ABS_OBJ =		$(addprefix $(OBJ_DIR), $(OBJ))

HEADER =		includes

DEPEND =		ft_malloc.h

ABS_DEPEND =	$(addprefix $(HEADER)/, $(DEPEND))

LIBFT =			ft

OBJ_LIBFT =		libft.a

LIBFT_DIR =		libft

ABS_OBJ_LIBFT =	$(addprefix $(LIBFT_DIR)/, $(OBJ_LIBFT))

LIBFT_HEADER =	$(addprefix $(LIBFT_DIR)/, $(HEADER))

CC =			gcc

FLAG =			-Wall -Wextra -Werror

all : $(ABS_OBJ_LIBFT) $(NAME)

$(NAME) :  $(ABS_OBJ)
	$(CC) $(FLAG) -shared -o $@ $^ -L$(LIBFT_DIR) -l$(LIBFT)

$(COR_OBJ) : $(COR_SRC) $(ABS_DEPEND)
	@mkdir -p obj
	$(CC) $(FLAG) -o $@ -c $< -I$(HEADER) -I$(LIBFT_HEADER)

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)

$(ABS_OBJ_LIBFT) :
	make -C $(LIBFT_DIR)

lclean :
	make clean -C $(LIBFT_DIR)

lfclean :
	make fclean -C $(LIBFT_DIR)

lre : 
	make re -C $(LIBFT_DIR)

clean : lclean
	rm -rf $(OBJ_DIR)
	rm -f $(ABS_OBJ)

fclean : clean lfclean
	rm -f $(NAME)

re : fclean lre all
