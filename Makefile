# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchatela <kchatela@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 15:09:03 by kchatela          #+#    #+#              #
#    Updated: 2024/11/25 14:54:32 by kchatela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a  #The build target name (executable/ library)
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
 		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c #Variable containing all .c files required to build the project
OBJS := $(SRC:%.c=%.o) #Converts all c files in SRC to object files. Using := ensures that this transformation happens once
CC = gcc #compiler
CCFLAGS = -Wall -Werror -Wextra #compiler flags
CPPFLAGS = # No need to add -I flag if libft.h is in the current directory


all: $(NAME) #Default target - builds the library

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

# %.o rule will compile one .c file to its correspondig object (.o) file
# The %.o: %.c pattern specifies that in order to build something whose
# file name ends with .o, you need to have a file that has the same prefix
# but then ends with .c rather than .o.
# $<: The name of the first prerequisite.
# $@: This corresponds to the name of the target : what is on the left
#     side of the colon.
%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -o $@ -c $<

clean: #Removes object files (*.o)
	rm -f $(OBJS)

fclean: clean #Removes both object files and the static library (libft.a)
	rm -f $(NAME)

re: fclean all #The re target is used to completely rebuild your project by first cleaning up all generated files (fclean), and then rebuilding everything (all)

.PHONY: all clean fclean re #declare that certain targets are not files
