#include<stdio.h>
 
int main() {
   int num1, num2;
 
   printf("\nEnter First Number : ");
   scanf("%d", &num1);
 
   printf("\nEnter Second Number : ");
   scanf("%d", &num2);
 
   num1 = num1 ^ num2;
   num2 = num1 ^ num2;
   num1 = num1 ^ num2;
 
   printf("\n Numbers after Exchange : ");
   printf("\n Num1 = %d and Num2 = %d", num1, num2);
 
   return(0);
}