#include <stdio.h>

int multiply_array(int *arr, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result*= *(arr+i); 
    }
    return result;
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements of the array: ");
    for (int i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int product = multiply_array(arr, n);
    printf("The product of the array elements is: %d\n", product);
    
    return 0;
}