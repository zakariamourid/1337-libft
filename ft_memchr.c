#include "libft.h"

void  *ft_memchr(const void *s, int c, size_t n)
{
  unsigned char *str;
  size_t i;

  str = (unsigned char *) s;
  i = 0;
  while(n--)
  {
    if(str[i] == (unsigned char) c)
    {
      return ((void *)(str + i));
    }
    i++;
  }
  return NULL;
}
