#include<stdio.h>

int main()
{
    int n;
    printf("Enter the  value\n");
    scanf("%d" ,&n);

    if((n | 1) == n+1)
    {
        printf("Yes the num is even");

    }

    else 
    {
        printf("No the num is odd");
    }
}