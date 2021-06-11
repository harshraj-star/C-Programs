#include<stdio.h>
int main()
{
    int a ,b;   // a =5  b =6
    printf("Enter the Inputs Value\n");
    scanf("%d\n %d" ,&a ,&b);

    int temp = a;  //  temp = 5
    a =b;          //  a =6
    b =temp;      // b = 5

    printf("So the swapped nums are : a =%d  ,  b =%d" ,a ,b);



}