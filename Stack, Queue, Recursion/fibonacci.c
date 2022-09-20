#include <stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("Enter a number whose fibonacci is to be calculated: ");
    scanf("%d", &n);
    int fib = fibo(n);
    printf("\nFibonacci is: %d", fib);
    return 0;
}
int fibo(int n)
{
    int fiba, fibb, fib;
    if (n == 0 || n == 1)
    {
        return n;
    }

    fiba = fibo(n - 2);
    fibb = fibo(n - 1);
    fib = fiba + fibb;
    return fib;
}