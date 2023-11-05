#include<stdio.h>
int main(void)
{
    char a='A';
    while(a)
    {
        printf("%d = %c\n", a, a);
        a++;
    }
    /* 0 is NULL */
    printf("%d = NULL", a);
    return 0;
}