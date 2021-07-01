#include<stdio.h>
void fun(int*);

int main(){
    int i=97, *p =&i;
    fun(&i);
    printf("%d" ,*p);
}

void fun(int *p){
    int j=2;
    p=&j;
    printf("%d\n" ,*p);

}
    
    
    

// o/p : 2 97