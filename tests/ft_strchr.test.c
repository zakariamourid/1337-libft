#include "../libft.h"

int main()
{
	char test[] = "hello";
	printf("original = %s \n",strchr(test,'l'));
	printf("mine = %s \n",ft_strchr(test,'l'));
	printf("original add = %p \n",strchr(test,'l'));
	printf("mine  add= %p \n",ft_strchr(test,'l'));
	printf("size of hello = %d \n" ,(int )ft_strlen(test));
}
