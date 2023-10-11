#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
     int fstDgt = n % 10, lstDgt = n /10;
    if (fstDgt % lstDgt == 0 || lstDgt % fstDgt == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}