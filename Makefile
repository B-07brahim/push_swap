SRCS = push_swap.c algorthem/push_parts.c algorthem/simple_sort_3.c algorthem/simple_sort_5.c algorthem/sort.c algorthem/value_part.c \
Libft/ft_atoi_error.c Libft/ft_atoi.c Libft/ft_calloc.c Libft/ft_strdup.c  Libft/ft_strlen.c \
operation/push_pa.c operation/push_pb.c operation/rev_rotate.c operation/rotate.c operation/swap.c \
algorthem/parts.c utile/elm_index.c utile/error_part1.c utile/is_empty.c  utile/error_part2.c utile/error_part3.c utile/is_sorted.c \
utile/join_argv.c utile/max_value.c utile/min_value.c utile/pop_elm.c Libft/ft_strjoin.c Libft/ft_split.c

NAME	= push_swap

OBJ =	$(SRCS:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

%.o:%.c
			@$(CC)  $(CFLAGS) -c $<	-o $@
			 @ echo "\033[1;32m         ->Compiled  $<  " 
			@ echo 
$(NAME):	$(OBJ)
			@$(CC)  $(CFLAGS)   $(OBJ) -o $(NAME)
			@ echo
			@ echo
			@ echo "\033[1;31m         ->Compiled Successfully--- ツ"

all: $(NAME)

clean:
		@$(RM) $(OBJ)
		@ echo "\033[1;33m         ---------- Cleaned-------  ツ"

fclean:	clean
		@$(RM) $(NAME)

re:		fclean all

.PHONY = all re fclean clean