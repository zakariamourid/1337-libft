CC = cc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
files = ft_strlen ft_memcpy ft_memset ft_bzero ft_memmove ft_memcmp \
		ft_memchr ft_isalpha ft_isdigit ft_isalnum ft_isascii  \
		ft_isprint ft_toupper ft_tolower ft_strchr ft_strrchr \
		ft_atoi ft_strnstr  ft_strncmp ft_calloc ft_strdup \
		ft_itoa ft_strlcpy ft_strlcat ft_strjoin ft_strtrim \
		ft_putchar_fd ft_putnbr_fd ft_putendl_fd ft_putstr_fd  ft_strmapi ft_striteri \
		ft_lstsize ft_lstadd_front ft_lstnew
BNSFILES = ft_lstsize
BNSCFILES = ft_lstsize.c
BNSOFILES = ft_lstsize.o
CFILES := $(addsuffix .c , $(files))
OFILES := $(addsuffix .o , $(files))
all: $(NAME)
$(NAME):$(OFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)
$(OFILES) : $(CFILES)
	$(CC) $(FLAGS) -c $(CFILES)
bonus : all

main: all
	$(CC) $(FLAGS) main.c -L. -lft -o main
clean: 
	rm -rf $(OFILES) 
fclean: clean 
	rm -rf $(NAME)
re: fclean all
