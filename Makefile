CC = cc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
files = ft_strlen ft_memcpy ft_memset ft_bzero ft_memmove ft_memcmp ft_memchr ft_isalpha ft_isdigit ft_isalnum ft_isascii  ft_isprint ft_toupper ft_tolower ft_strchr ft_strrchr ft_isalpha ft_atoi ft_strnstr  ft_strncmp ft_calloc ft_strdup ft_substr ft_itoa ft_strlcpy ft_strlcat ft_strjoin ft_strtrim ft_putchar_fd ft_putnbr_fd ft_putendl_fd ft_putstr_fd ft_strncmp  ft_strmapi ft_striteri 

CFILES = $(addsuffix .c , $(files))
OFILES = $(addsuffix .o , $(files))
all:
	$(CC) $(FLAGS) -c $(CFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)
main: all
	$(CC) $(FLAGS) main.c -L. -lft -o main
clean: 
	rm -rf $(OFILES) 
fclean: clean 
	rm -rf $(NAME)
re: fclean all
$(NAME) : all
