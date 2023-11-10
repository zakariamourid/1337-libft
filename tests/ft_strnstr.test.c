#include "../libft.h"

int main()
{
	char str[] = "hello";
	char to_find[] = "lo";
	printf("res = %s \n",strnstr(str,to_find,2));
	printf("res = %s \n ",ft_strnstr(str,to_find,2));
}
