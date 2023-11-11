#include "libft.h"
int main(void)
{
    char a[]="ABC";
	char *dest = NULL;
    printf(" %d \n ", strlcat(a,a,4));
    printf(" %d \n ", ft_strlcat(a,a,4));
    return 0;
}
