#include "libft.h"

void  *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
  char *s;
  char *d;

  s = (char *) src;
  d = (char *) dst;
  while(n--)
    *d++ = *s++;
  return (dst);
}
