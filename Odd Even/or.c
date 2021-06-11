#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number\n");
    scanf("%d" ,&a);
    if(a==0) {
        printf("It is neither odd nor even");
    }

    if((a | 1)== a+1){
        printf("The Number is Even");
    }

    else {
        printf("The Numbver is Odd");
    }
    
    
    return 0;
}
