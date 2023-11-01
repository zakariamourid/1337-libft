#include "../libft.h"

int main()
{
  char dst[100] = "hello world";
  char dst2[100] = "hello world";
  printf("ft_memset = %s\n",(char *)ft_memset(dst ,'z',4));
  printf("memset = %s\n",(char *)memset(dst2,'z' ,4));
}
