#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    long long int a, b=1;
    printf("The prime factors of ");
    scanf("%lld", &a);
    printf("is ");
    for (b = 1; b <= a; b++)
    {
        
        if ((b == 1 || b % 2 == 0 || b % 3 == 0 || b % 5 == 0 || b % 7 == 0)
            && (b != 2 && b != 3 && b != 5 && b != 7))
        {
            continue;

        }
        if (a % b == 0)
        {
            a = a / b;
            printf("%lld  ", b);
        }

    }
    if (b>1)
    {
        b--;
    }
    printf("\nthe largest prime factor is %d",b);
    return 0;
}