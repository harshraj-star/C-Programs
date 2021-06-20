#include<stdio.h>

int main(){
    int a =5;
    int b =++a + a++ + --a;
    printf("%d\n" ,b);
    
    return 0;

}