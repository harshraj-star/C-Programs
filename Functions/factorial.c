// Using Recursion...

#include<stdio.h>

int fact();
int main()
{
    int k;
    printf("Enter the number\n");
    scanf("%d" , &k);
    int factorial =fact(k);
    printf("The Factorial of the given number is %d" , factorial);

}

int fact(int n)
{
    if(n==1) {
        return 1;
    }

    if(n==0){
        return 0;
    }

    n = n*fact(n-1);
    return n;
}