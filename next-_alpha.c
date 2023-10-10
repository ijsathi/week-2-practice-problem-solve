#include <stdio.h>
int main()
{
    char letter;
    scanf("%c", &letter);
    if (letter >= 'A' && letter < 'Z')
    {
        printf("%c", letter + 1);
    }
    else if (letter == 'Z')
    {
        printf("%c", 65);
    }
    else if (letter >= 'a' && letter < 'z')
    {
        printf("%c", letter + 1);
    }
    else if (letter == 'z')
    {
        printf("%c", 97);
    }
    else
    {
        printf("%c", letter);
    }
    return 0;
}