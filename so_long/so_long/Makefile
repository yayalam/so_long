NAME = so_long

SRC =	so_long.c utils.c utils2.c ft_parcing.c ft_find_p.c hook_w_a.c \
			ft_test_map.c ft_test_map2.c rander.c hook_a_s.c convert.c \
			mlx_hook.c utils3.c open.c check.c

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(OBJ) so_long.h
    
	$(CC) $(FLAGS) -lmlx -framework OpenGl -framework AppKit $(SRC) -o $(NAME)

%.o: %.c
	$(CC) -c $(FLAGS) -Imlx $< -o $@

execute:
	./$(NAME) maps/map.ber


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

