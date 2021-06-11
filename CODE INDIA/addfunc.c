#include<stdio.h>

int sum(int , int);

int main()
{
    int a ,b;
    printf("Enter the nums\n");
    scanf("%d %d" ,&a, &b);

    sum(a,b);


}

int sum(int x , int y)
{


    int z =x+y;
    printf("The Sum Of a and b is %d" , z);


}