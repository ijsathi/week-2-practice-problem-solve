#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 10; i <= 99; i++)
    {
        if (n % i == 0 )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}