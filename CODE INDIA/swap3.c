#include<stdio.h>

int main()
{
    int a  ,b ;
    printf("Enter the Values of a and b\n");
    scanf("%d%d" , &a , &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("The Swapped nums are :  a=%d , b=%d"  ,a ,b);


}