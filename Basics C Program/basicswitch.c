// Switch can only work on Integer And Character
// Not Work for float , long , short etc...

#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d" ,&a);

    switch(a)
    {
        case 1:
        printf("Value is %d True" , a);
        break;

        case 2:
        printf("Value is %d True" , a);
        break;

        case 3:
        printf("Value is %d True" , a);
        break;

        case 4:
        printf("Value is %d True" , a);
        break;

        case 5:
        printf("Value is %d True" , a);
        break;

        case 6:
        printf("Value is %d True" , a);
        break;

        default :
        printf("You are wrong");
    }
}