#include "../libft.h"

int main()
{
  char *str = "hella";
  char *str2 = "hella";
  printf("str = %d\n", memcmp(str,str2,10));
  printf("str = %d\n", ft_memcmp(str,str2,10));
}
