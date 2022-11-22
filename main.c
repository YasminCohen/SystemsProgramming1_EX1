
/*#include NumClass.h : NumClass.h file include The declarations of the functions*/
#include "NumClass.h"
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d   %d", &a, &b);
    printf("Armstrong Numbers between %d , %d is :", a, b);
    for (int i = a; i <= b; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf(" %d ", i);
        }
    }
    printf("\n");
    printf("The Palindromes Numbers between %d , %d is :", a, b);
    for (int i = a; i <= b; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf(" %d ", i);
        }
    }
    printf("\n");
    printf("The Primes Numbers between %d , %d is :", a, b);
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i) == 1)
        {
            printf(" %d ", i);
        }
    }
    printf("\n");
    printf("The Strong Numbers between %d , %d is :", a, b);
    for (int i = a; i <= b; i++)
    {
        if (isStrong(i) == 1)
        {
            printf(" %d ", i);
        }
    }
    printf("\n");
    return 0;
}
