#include "../libft.h"

int main()
{
  char src[] = "abcdefghij";
  char dst[100];
  char src2[] = "abcdefghij";
  char dst2[100];
//  printf("ft_memcpy = %s\n",(char *)ft_memcpy(dst, src ,6));
 // printf("memcpy = %s\n",(char *)memcpy(dst2, src2 ,6));
  //it triggers the overlap probelm
   printf("ft_memove = %s\n",(char *)ft_memcpy(src+2, src ,6));
  printf("memmove = %s\n",(char *)memcpy(src2 + 2, src2 ,6));
}
