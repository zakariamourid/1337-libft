#include "../libft.h"

int main()
{
  int logo = 0;
  char *ptr = &logo;
  printf("logo = %d \n" ,logo);
	memset(&ptr[0],57 ,1);
	memset(&ptr[1],5 ,1);
  printf("logo = %d \n" ,logo);
}
