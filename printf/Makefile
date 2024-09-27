# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 17:10:44 by knieve-l          #+#    #+#              #
#    Updated: 2024/09/27 10:03:12 by knieve-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Las Flags para compilar
FLAG = -Wall -Wextra -Werror
# El nombre del "Programa"
NAME = libftprintf.a
# Los Archivos "librerias" .c
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c ft_puthex.c ft_putptr.c ft_printf.c
	  
# Los Archivos "librerias" .o
OBJ = $(SRC:.c=.o)

all: ${NAME}

# Creo el "Programa" a partir de los archivos .o
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created and indexed"

# Creo los archivos .o
%.o: %.c
	@gcc $(FLAG) -c $< -o $@

# Borra los archivos .o
clean:
	@rm -f $(OBJ)
	@echo "OBJ cleaned"

# Borra los archivos .o y el "Programa"
fclean: clean
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@echo "All objects and executable cleaned"
# Borra el "Programa" y recompila
re: fclean all

# Indica a Make que no son archivos reales, sino nombres de objetivos, Esto evita conflictos si existieran archivos con esos mismos nombres.
.PHONY:	all clean fclean re bonus
