#include "../libft.h"

int main()
{
	char i;
	char c;
	printf("toupper = ");
	i = 'A';
    while (i <= 'Z')
    {
        c = ft_toupper(i);
        write(1, &c, 1);
        i++;
    }
	printf("C tolower = %c \n",ft_tolower('C'));
	printf("^ tolower = %c \n",ft_tolower('^'));
	printf("$ toupper = %c \n",ft_toupper('$'));
}
