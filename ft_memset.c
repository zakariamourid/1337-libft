#include "libft.h"

void  *ft_memset(void *b,int c, size_t len)
{
  unsigned char ch;
  char *str;

  str = (char *) b;
  ch = (unsigned char) c;
  while (len--)
    *str++ = ch;
  return b;
}
