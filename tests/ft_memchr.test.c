#include "../libft.h"

int	main(void)
{
	printf("memchr = %s \n", (char *)memchr("hello", 'l', 5));
	printf("ft_memchr = %s \n", (char *)ft_memchr("hello", 'l', 5));
}
