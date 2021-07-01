#include<stdio.h>
void fun(int*);

int main(){
    int i=10;
    fun((&i)++);
}

void fun(int *p){
    printf("%d\n" ,*p);

}
    
    
    

}

// o/p : Compile time error..