# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborda <aborda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/22 10:21:17 by aborda            #+#    #+#              #
#    Updated: 2026/02/01 15:06:24 by aborda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
RED			= \033[0;31m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
MAGENTA		= \033[0;35m
CYAN		= \033[0;36m
RESET		= \033[0m

# Project
NAME		= so_long
CC			= gcc-11
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -Iincludes -I./libft/includes -I$(MLX_DIR)

#MINILIBX
MLX_DIR = minilibx
MLX_LIB = $(MLX_DIR)/libmlx.a
MLX_FLAGS = -L$(MLX_DIR) -lmlx -lXext -lX11 -lm

# Librairy
LIBFT 		= ./libft/libft.a

# Directories
OBJ_DIR		= objs

# Sources
SRCS		= srcs/main.c \
			  srcs/flood/flood_fill.c \
			  srcs/flood/init_map_copy.c \
			  srcs/flood/init_nb_collectible.c \
			  srcs/flood/init_player_pos.c \
			  srcs/flood/init_s_flood.c \
			  srcs/game/callback.c \
			  srcs/game/close_game.c \
			  srcs/game/init_img.c \
			  srcs/game/init_s_game.c \
			  srcs/game/render_map.c \
			  srcs/map/init_map.c \
			  srcs/map/init_nb_line.c \
			  srcs/map/init_s_map.c \
			  srcs/map/map_utils.c \
			  srcs/utils/utils.c \
			  srcs/validation/check_elements.c \
			  srcs/validation/check_format.c \
			  srcs/validation/check_path.c \
			  srcs/validation/is_valid_map.c \
			  srcs/errors/errors.c

# Objects
OBJS		= $(SRCS:srcs/%.c=$(OBJ_DIR)/%.o)

# Rules
all: $(NAME)

$(LIBFT):
	@make -C libft

$(OBJ_DIR)/%.o: srcs/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "$(GREEN)✓$(RESET) Compiled: $(CYAN)$<$(RESET)"

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(MLX_FLAGS) -o $(NAME)
	@echo "$(GREEN)==========================================$(RESET)"
	@echo "$(GREEN)✓ $(NAME) created successfully!$(RESET)"
	@echo "$(GREEN)==========================================$(RESET)"

clean:
	@make clean -C libft
	@rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)✓ Object files removed$(RESET)"

fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)
	@echo "$(YELLOW)✓ $(NAME) removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re
