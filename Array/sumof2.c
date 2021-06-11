#include<stdio.h>

int main()
{
    int arr1[30] , n, arr2[30] , arr3[30];

    printf("Enter the Size of Array 1\n");
    scanf("%d" , &n);

    printf("Enter the elements of Array 1\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d" , &arr1[i]);
    }

    printf("Enter the Size of Array 2\n");
    scanf("%d" , &n);

    printf("Enter the elements of Array 2\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d" , &arr2[i]);
    }

    printf("The Sum of Array 1 and Array 2 are: \n");

    for(int i=0; i<n; i++)
    {
        arr3[i] =arr1[i] + arr2[i];
        printf("%d\n" , arr3[i]); 
    }





    
}