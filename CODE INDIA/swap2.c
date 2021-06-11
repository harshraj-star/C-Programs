#include<stdio.h>

int main()
{
    int a ,b;
    printf("Enter the Vlaues\n");
    scanf("%d%d" , &a ,&b);

    a =a^b ;
    b =a^b ;
    a =a^b;

    printf("So the Swapped Nums are: a =%d b =%d" , a ,b);


}