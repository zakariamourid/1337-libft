CMP = cc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
files = ft_strlen
CFILES = $(addsuffix .c , $(files))
OFILES = $(addsuffix .o , $(files))
all:
	$(CMP) $(FLAGS) -c $(CFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)
main: all
	$(CMP) $(FLAGS) main.c -L. -lft -o main
clean: 
	rm -rf *.o 
fclean: clean 
	rm -rf $(NAME)
