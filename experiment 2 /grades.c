#include <stdio.h>
int main()
{
    printf("Enter your average marks:");
    int marks;
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("Your grade is A1");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Your grade is A2");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Your grade is B1");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Your grade is B2");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Your grade is C1");
    }
    else if (marks >= 40 && marks < 50)
    {
        printf("Your grade is C2");
    }
    else if (marks >= 30 && marks < 40)
    {
        printf("Your grade is D");
    }
    else
    {
        printf("Your grade is F");
    }
    return 0;
}