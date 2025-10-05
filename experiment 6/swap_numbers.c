#include <stdio.h>

int call_by_value(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    return 0;
}

int call_by_reference(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

int main()
{
    int a, b;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping (call by value): a = %d, b = %d\n", a, b);
    call_by_value(a, b);
    printf("After swapping (call by value): a = %d, b = %d\n", a, b);

    printf("Before swapping (call by reference): a = %d, b = %d\n", a, b);
    call_by_reference(&a, &b);
    printf("After swapping (call by reference): a = %d, b = %d\n", a, b);

    return 0;
}