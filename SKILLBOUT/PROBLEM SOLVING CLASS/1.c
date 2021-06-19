#include<stdio.h>

void main(){
    int a,b;
    a=g();
    b=f();

    while(a<=5){
        printf("%d%d\t" ,a ,b);
        a=g();
        b=f();
    }

}

 int f(){
    static int x=0;  
    // Static variables have a property of preserving their value even after they are out of their scope!Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope.
    return x++;
}

 int g(){
    int x =0;
    return x++;
}

/* Output :
Infinite Number of times loop will run;

 warning: implicit declaration of function 'g' [-Wimplicit-function-declaration]
     a=g();
       ^
test.c:6:7: warning: implicit declaration of function 'f' [-Wimplicit-function-declaration]
     b=f();

     Implicit declaration of functions is not allowed; every function must be explicitly declared before it can be called
    */