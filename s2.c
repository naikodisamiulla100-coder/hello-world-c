// prime numbers
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are:\n", n);
    for (i = 2; i <= n; i++)
    {
        int isPrime = 1; // Assume number is prime
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0; // Not prime
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}