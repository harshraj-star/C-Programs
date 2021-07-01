#include<stdio.h>
void fun(int*);

int main(){
    int i=10, *p =&i;
    fun(p++);
}

void fun(int *p){
    printf("%d\n" ,*p);

}
    
    
    

// o/p : 10