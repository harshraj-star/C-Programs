#include<stdio.h>
#define square(x)(x*x);

int main(){
    int x,y=1;
    x= square(y+1);
    printf("%d\n" ,x);
    
    return 0;

}