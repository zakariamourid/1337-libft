#include "libft.h"

void  *ft_memmove(void *dst, const void *src, size_t len)
{
  unsigned char *s;
  unsigned char *d;
  size_t i;

  i = 0;
  s = (unsigned char *) src;
  d = (unsigned char *) dst;
  if(src >= dst)
  {
	  while(len)
	  {
		  d[len] = s[len];
		  len--;
	  }
  }
  else{
	  while(len--)
  {
		d[i] = s[i];
		i++;
	  }
  }
  return (dst);
}
