// We cannot programmed swapping using switch.....

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the numbers\n");
    scanf("%d %d" , &a , &b);

    int temp=a;
    a =b;
    b= temp;

    switch(c)
    {
        case 'a' :
        printf("swapped is%d" , b);
        break;

        default :
        printf("Wrong");
    }
}
