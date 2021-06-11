#include<stdio.h>
int main()
{
    int a ,b ,c;
    printf("Enter the Values\n");
    scanf("%d %d %d" ,&a ,&b ,&c);

    a =a+b+c;
    b =a -(b+c);
    c = a -(b+c);
    a = a -(b+c); 

    printf(" The Swapped Nums are: a=%d , b =%d , c =%d" , a, b, c);
    



}