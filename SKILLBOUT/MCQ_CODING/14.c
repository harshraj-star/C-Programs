#include<stdio.h>


void main(){
    int a[4] ={1,2,3,4};
    int *p =a;
    // here a stands for storing the address of its first element {1}

    printf("%p\t%p" ,p ,a);
    // both p and a stores same address...

}
    
    
    

// o/p : Same Address 
// i.e : 0061FEC0        0061FEC0