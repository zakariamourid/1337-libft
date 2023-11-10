#include "../libft.h"

int main()
{
	char test[] = "hello";
	printf("original = %s \n",strrchr("teste",1024));
	printf("mine = %s \n",ft_strrchr("teste",1024));
	printf("original add = %p \n",strrchr(test,'l'));
	printf("mine  add= %p \n",ft_strrchr(test,'l'));
	printf("size of hello = %d \n" ,(int )ft_strlen(test));
}
