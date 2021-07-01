#include<stdio.h>

void main(){
    int x=0;
    int *ptr =&x;
    printf("%p\n" ,ptr);
    ptr++;
    printf("%p\n",ptr);
    

}