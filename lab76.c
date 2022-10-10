#include <stdio.h>
int main() //6. Reverse an array using Pointers.
{
    int a;
    printf("Enter the size of Array - ");
    scanf("%d", &a);
    int arr1[a];
    int *ptr;
    ptr = arr1;
    printf("Enter the Array - ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &(*(ptr + i)));
    }
    printf("Given array - ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", *(ptr + i));
    }
    int temp;
    for (int i = 0; i < a / 2; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + a - 1 - i);
        *(ptr + a - 1 - i) = temp;
    }
    printf("\n");
    printf("Rversed Array -  ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", *(ptr + i));
    }
}