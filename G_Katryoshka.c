#include <stdio.h>
int main()
{
    long long int eye, mouth, body, statue = 0;
    scanf("%lld%lld%lld", &eye, &mouth, &body);
    if (eye == 0 || mouth == 0 || body == 0)
    {
        printf("0");
    }
    else
    {
        long long min = eye;
        if (mouth < min)
        {
            min = mouth;
        }
        if (body < min)
        {
            min = body;
        }
        statue = statue + min;
        eye = eye - min;
        body = body - min;
        mouth = mouth - min;
        if (eye / 2 < body)
        {
            statue += eye / 2;
        }
        else
        {
            statue = statue + body;
        }
        printf("%lld", statue);
    }
    return 0;
}