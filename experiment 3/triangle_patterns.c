#include <stdio.h>

int filled_right_angled_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int edge_right_angled_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

int filled_equilateral_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int edge_equilateral_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (k == 1 || k == (2 * i - 1) || i == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int n;

    printf("Enter the number of rows for the triangle patterns: ");
    scanf("%d", &n);

    printf("\nFilled Right-Angled Triangle:\n");
    filled_right_angled_triangle(n);

    printf("\nEdge Right-Angled Triangle:\n");
    edge_right_angled_triangle(n);

    printf("\nFilled Equilateral Triangle:\n");
    filled_equilateral_triangle(n);

    printf("\nEdge Equilateral Triangle:\n");
    edge_equilateral_triangle(n);

    return 0;
}