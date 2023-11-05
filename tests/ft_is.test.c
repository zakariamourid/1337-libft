#include "../libft.h"

int main() {
    char ch = 'A';
    printf("Is '%c' an alphabetic character? %s\n", ch, ft_isalpha(ch) ? "Yes" : "No");

    ch = '5';
    printf("Is '%c' a digit? %s\n", ch, ft_isdigit(ch) ? "Yes" : "No");

    ch = '#';
    printf("Is '%c' an alphanumeric character? %s\n", ch, ft_isalnum(ch) ? "Yes" : "No");

    ch = -128; // Example non-ASCII character
    printf("Is character with ASCII value %d within ASCII range? %s\n", ch, ft_isascii(ch) ? "Yes" : "No");

    return 0;
}

