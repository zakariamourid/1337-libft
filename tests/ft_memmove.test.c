#include "../libft.h"

int main()
{
  char src[] = "abcdefghij";
  char dst[100];
  char src2[] = "abcdefghij";
  char dst2[100];
  //here it works like memcpy
//  printf("ft_memove = %s\n",(char *)ft_memmove(dst, src ,6));
//  printf("memmove = %s\n",(char *)memmove(dst2, src2 ,6));
  //here it solves the overlap problem when u try to copy a changed byte to a dest
  
  printf("ft_memove = %s\n",(char *)ft_memmove(src+2, src ,6));
  printf("memmove = %s\n",(char *)memmove(src2 + 2, src2 ,6));
}
