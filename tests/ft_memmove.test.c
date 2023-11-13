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
  
//  printf("ft_memove = %p\n",(int )ft_memmove(NULL, src ,3));
  printf("str ft = %s\n" ,src);
  strcpy(src, "123456");
  printf("memmove = %p\n",(int )memmove(NULL, src ,3));
  printf("str = %s\n" ,src);
}

