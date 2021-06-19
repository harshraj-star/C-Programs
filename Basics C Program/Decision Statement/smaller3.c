#include<stdio.h>

int main(){
    int a ,b,c;
    printf("Enter the 1st num\n");
    scanf("%d" ,&a);
    printf("Enter the 2nd num\n");
    scanf("%d" ,&b);
    printf("Enter the 3rd num\n");
    scanf("%d" ,&c);

    if(a<b){
        if(a<c){
            printf("a=%d" ,a);

        }
        else{
            printf("c=%d" ,c);


        }

    }

    else if(b>c){
        printf("c=%d" ,c);
    }

    else {
        printf("b=%d" ,b);
    }
}