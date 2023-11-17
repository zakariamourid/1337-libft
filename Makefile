CC = cc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
files = ft_strlen ft_memcpy ft_memset ft_bzero ft_memmove ft_memcmp \
		ft_memchr ft_isalpha ft_isdigit ft_isalnum ft_isascii  \
		ft_isprint ft_toupper ft_tolower ft_strchr ft_strrchr \
		ft_atoi ft_strnstr  ft_strncmp ft_calloc ft_strdup \
		ft_itoa ft_strlcpy ft_strlcat ft_strjoin ft_strtrim ft_substr\
		ft_putchar_fd ft_putnbr_fd ft_putendl_fd ft_putstr_fd  ft_strmapi ft_striteri \

BNSFILES=ft_lstsize_bonus  ft_lstadd_front_bonus ft_lstadd_back_bonus ft_lstnew_bonus ft_lstlast_bonus ft_lstdelone_bonus ft_lstclear_bonus
BNSCFILES = $(addsuffix .c , $(BNSFILES))
BNSOFILES = $(addsuffix .o , $(BNSFILES))
CFILES := $(addsuffix .c , $(files))
OFILES := $(addsuffix .o , $(files))
all: $(NAME)
$(NAME):$(OFILES)
	ar rcs $(NAME) $(OFILES)
$(OFILES) : $(CFILES)
	$(CC) $(FLAGS) -c $(CFILES)
$(BNSOFILES) : $(BNSCFILES)
	$(CC) $(FLAGS) -c $(BNSCFILES)
	ar rcs $(NAME) $(BNSOFILES)
bonus : $(BNSOFILES)
clean: 
	rm -rf $(OFILES) $(BNSOFILES)
fclean: clean 
	rm -rf $(NAME)
re: fclean all
