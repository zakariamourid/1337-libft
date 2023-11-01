#include "libft.h"

void  *ft_memmove(void *dst, const void *src, size_t len)
{
  char *s;
  char *d;
  char *temp;
  size_t i;

  i = 0;
  temp = (char *) malloc(sizeof(char) * len);
  s = (char *) src;
  d = (char *) dst;
  while(i < len)
  {
    temp[i] = s[i];
    i++;
  }

  while(len--)
    *d++ = *temp++;
  return (dst);
}
