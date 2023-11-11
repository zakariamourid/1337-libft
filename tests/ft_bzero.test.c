#include "../libft.h"

int	main(void)
{
	char	dst[100];
	char	dst2[100];

	dst[100] = "hello world";
	dst2[100] = "hello world";
	ft_bzero(dst, 6);
	bzero(dst2, 6);
	printf("ft_bzero = %s ------\n", dst);
	write(1, dst, 12);
	printf("\n");
	printf("bzero = %s\n", dst2);
	write(1, dst2, 12);
}
