#include "../libft.h"

int main()
{
	char test[] = "hello";
	printf("original = %p \n",strchr("teste",1024));
	printf("mine = %p \n",ft_strchr("teste",1024));
	printf("original add = %p \n",strchr(test,'l'));
	printf("mine  add= %p \n",ft_strchr(test,'l'));
	printf("size of hello = %d \n" ,(int )ft_strlen(test));
}
