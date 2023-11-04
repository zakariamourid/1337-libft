#include "../libft.h"

int main()
{
  char src[] = "123456";
  char dst[100];
  char src2[] = "123456";
  char dst2[100];
  //here it works like memcpy
//  printf("ft_memove = %s\n",(char *)ft_memmove(dst, src ,6));
//  printf("memmove = %s\n",(char *)memmove(dst2, src2 ,6));
  //here it solves the overlap problem when u try to copy a changed byte to a dest
  
  printf("ft_memove = %s\n",(char *)ft_memmove(src + 3, src ,3));
  printf("memmove = %s\n",(char *)memmove(src2 + 3, src2 ,3));
  printf("str = %s\n" src);
}

