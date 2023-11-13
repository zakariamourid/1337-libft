#include "../libft.h"

int main()
{
 	int a = 0;
	char *ptr = &a;
	ft_memset(ptr++,57,1);
	ft_memset(ptr,5,1);
	printf("hello === %d \n",a);
}
