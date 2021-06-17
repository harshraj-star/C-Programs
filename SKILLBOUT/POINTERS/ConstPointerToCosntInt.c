#include<stdio.h>

int main(){
    const int a=10 ,b =20;
    

    int a =10;
    int b =20;
     int *c =&b;
     *c =40;



    printf("%d\n" ,a);
    printf("%d\n" ,b);
    printf("%d\n" ,c);
    scanf("");
    return 0;

}