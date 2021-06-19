#include<stdio.h>

int main()
{
    int a ,b,c;
    char operator;
    printf("Enter an operator (+, -, *,): \n");
    scanf("%c", &operator);
    printf("Enter the Inputs\n");
    scanf("%d %d" ,&a , &b);
    

    switch(operator)
    {
        case '+':
        c = a+b;
        printf("%d" ,c);
        break;

        case '-' :
        c= a-b;
        printf("%d" ,c);
        break;

        case '*' :
        c =a*b;
        printf("%d" , c);
        break;

        case '/' :
        c =a/b;
        printf("%d" , c);
        break;

        default :
        printf("Sorry you have provided wrong input ");

    }

}