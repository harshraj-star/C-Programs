#include<stdio.h>


void main(){
    int a[3] ={1,2,3};
    int *p =a;
    // here a stands for storing the address of its first element {1}

    printf("%p\t%p" ,p ,a);
    // both p and a stores same address...

}
    
    
    

// o/p : Same Address 
// i.e : 0061FEC0        0061FEC0