#include<stdio.h>
int x=0;

void main(){
    int *const ptr =&x;
    printf("%p\n" ,ptr);
    ptr++;
    printf("%p\n" ,ptr);
    

}

// o/p : Compile Time Error