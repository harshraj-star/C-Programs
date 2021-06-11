#include<stdio.h>

int main()
{
    int n ,k;
    printf("Enter the number\n");
    scanf("%d" ,&n);
    k = n%2;

    switch(k)
    {
        case 0 :
        printf("Yes Our Number is Even");
        break;

        default :
        printf("Our Number is odd");
    }
}