#include <stdio.h>

int main()
{
    char ch = 'A';
    printf("The character is %c\n", ch);
    printf("The value of character %d\n", ch);

    if (ch >= 97 && ch<= 122)
    {
        printf("This character is lowercase\n");
    }
    else
    {
        printf("This character is not lowercase\n");
    }
    return 0;
}