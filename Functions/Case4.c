                                                                         // Without Argument nd without return value

#include<stdio.h>
void sum();
void main()
{
    sum();
    
}

void sum()
{
    int x ,y, z;
    printf("Enter the values of x ,y ,z\n");
    scanf("%d %d %d" ,&x ,&y ,&z);
    z= x+y;
    printf("The Sum of x and y is %d\n" , z);

}