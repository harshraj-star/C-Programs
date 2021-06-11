// With Arguments and With Return Values

#include<stdio.h>
int sum();
int main()
{
    int  l,m;
    int Sum =sum(l ,m);
    printf("The sum is %d" , Sum);

}

int sum(int a , int b)
{

    int c;
    printf("enter the two numbers\n");
    scanf("%d %d" ,&a , &b);
    c= a+b;
    return c;
    
}