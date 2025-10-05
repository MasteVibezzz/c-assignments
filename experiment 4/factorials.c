#include <stdio.h>

int recursive_factorial (int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * recursive_factorial(n - 1);
}

int for_loop_factorial (int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d using recursion is: %d\n", n, recursive_factorial(n));
    printf("Factorial of %d using for loop is: %d\n", n, for_loop_factorial(n));
    return 0;
}