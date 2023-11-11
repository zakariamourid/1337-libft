#include "../libft.h"

int	main(void)
{
	char	*str;
	char	*str2;

	str = "hella";
	str2 = "hella";
	printf("str = %d\n", memcmp(str, str2, 10));
	printf("str = %d\n", ft_memcmp(str, str2, 10));
	printf("str = %d\n", str);
	printf("str = %d\n", str2);
}
