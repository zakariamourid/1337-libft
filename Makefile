CMP = cc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
files = ft_strlen ft_memcpy ft_memset ft_bzero ft_memmove ft_memcmp ft_memchr ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_toupper ft_tolower ft_strchr ft_strrchr

CFILES = $(addsuffix .c , $(files))
OFILES = $(addsuffix .o , $(files))
all:
	$(CMP) $(FLAGS) -c $(CFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)
main: all
	$(CMP) $(FLAGS) main.c -L. -lft -o main
clean: 
	rm -rf $(OFILES) 
fclean: clean 
	rm -rf $(NAME)
re: fclean all
$(NAME) : all
