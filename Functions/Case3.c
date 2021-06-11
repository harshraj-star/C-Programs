                  // Without Argumnent and with Return value
#include<stdio.h>
int sum();
int main()
{
    int c;
    c = sum();
    printf("%d is the sum of both given numbers" , c);

}  

int sum() {
    int a ,b, c;
    printf("Enter the two numbers\n");
    scanf("%d %d" ,&a ,&b);
    c = a+b;
    return c;
}