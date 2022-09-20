#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number whose factorial is to be calculated: ");
    scanf("%d", &n);
    long fact = factorial(n);
    printf("\nFactorial is: %ld", fact);
    return 0;
}
int factorial(int n)
{
    long fact;
    if (n == 0)
    {
        fact = 1;
        return fact;
    }

    fact = factorial(n - 1);
    fact = n * fact;
    return fact;
}