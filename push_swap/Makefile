NAME = push_swap

NAME_bonus = checker

SRC = mondatory/ft_sort_r.c mondatory/ft_sort_s.c mondatory/check_arg.c mondatory/push_swap.c \
			mondatory/utils.c mondatory/utils2.c mondatory/utils3.c mondatory/sort_small.c \
			mondatory/indexing.c
	
SRC_B = bonus/checker.c bonus/ft_sort_r_bonus.c bonus/ft_sort_s_bonus.c bonus/get_next_line.c bonus/utils_bonus.c\
			bonus/utils2_bonus.c bonus/utils3_bonus.c 

obj = $(SRC:.c=.o)

obj_b = $(SRC_B:.c=.o)

hd_bonus = bonus/push_swap_bonus.h

hd = mondatory/push_swap.h

flags = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(hd) $(obj) $(SRC)
		cc $(flags) $(SRC) -o $(NAME)

bonus : $(NAME_bonus)

$(NAME_bonus) : $(hd_bonus) $(obj_b) $(SRC_B)
		cc $(flags) $(SRC_B) -o $(NAME_bonus)

%.o : %.c
	cc $(flags) -c $< -o $@

clean :
	rm -rf $(obj) $(obj_b)

fclean : clean
	rm -rf  $(NAME) $(NAME_bonus)

re : fclean all