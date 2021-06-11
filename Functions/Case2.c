// With Argumnets and without return values

#include<stdio.h>
void sum();
int main()
{
    int m ,n ;
    sum(m ,n);

}

void sum(int a , int b){
    int c ;
    printf("Enter the value of two numbers\n");
    scanf("%d %d" , &a ,&b);
    c = a+b;
    printf("The sum of given two inputs are =%d" , c);
}