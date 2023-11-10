#include<stdio.h>
int main(void)
{
    char a[]="ABC";
	char *b = a;
	a[0] = b[0];
    printf("%s = text", b);
    return 0;
}
