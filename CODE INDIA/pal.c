#include<stdio.h>
 void main() 
 {
     int rev =0, d ,m ,n;
     printf("Enter the number\n");
     scanf("%d" , &n);
     m =n;
     while(n>0){
         d = n%10;
         n = n/10;
         rev  = rev*10 +d;

     }
     if(rev == m)
     {
         printf("Yes the given number is pal..");
     }

     else {
         printf("No the given number is not pal...");
     }
     


 }