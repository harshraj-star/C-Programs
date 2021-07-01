#include<stdio.h>


void main(){
    int a[4] ={1,2,3,4};
    int *p =a+3;
    // a+3 means (index value 1 + 3) =address of 4
    // So p holds address of index value 4..

    printf("%d\n" ,p[-2]);
    // Lets take address of 4 as 1000
    // address + index * sizeof(dataType) 
    // 1000 + -2 *4 = 992
    // 992 is the address of a[2] so it means a[-2] = a[2] somehow...
    
}
    
    
    

// o/p : Same Address 
// i.e : 0061FEC0        0061FEC0