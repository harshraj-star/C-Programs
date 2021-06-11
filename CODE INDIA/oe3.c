#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d" ,&n);

    if((n & 1) ==0)
    {
        printf("yes you are right the num is even");
    }

    else 
    {
        printf("No you are wrong the num is odd");
    }

    
}