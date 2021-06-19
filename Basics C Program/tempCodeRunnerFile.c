#include<stdio.h>
#include<math.h>
int main(){
int rem,i=0,d=0,a,num;
printf("Enter ur number:");
scanf("%d",&num);
while(num>0){
rem=num%10;
num=num/10;
a=rem*(pow(2,i));
d=d+a;

i++;

}
printf("%d" ,d);

}