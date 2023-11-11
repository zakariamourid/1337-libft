#include <stdio.h>
#include <string.h>
int main()
{
  char dest[20];
  memset(dest, 'r', 15);
    strlcat(dest, "lorem ipsum dolor sit amet", 5);
}
