#include<stdio.h>

int main()
{
    int n;
    printf("enter the value\n");
    scanf("%d" , &n);

    if((n/2)*2 == n)
    {
        printf("Yes you are right the num is Even");
    }

    else 
    {
        printf("No You are wrong the num is odd");
    }


}