#include <stdio.h>
int main() {

    int n , i =0;
    printf("Enter the value\n");
    scanf("%d" , &n);

    while(i<n){
        printf("The value of i is %d\n" , i);
        i++;
    }
    return 0;
}