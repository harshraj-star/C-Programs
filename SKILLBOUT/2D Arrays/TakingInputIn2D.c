#include<stdio.h>

int main(){
    int a[3][3] = {10};
    int n1 =sizeof(a)/sizeof(*a);
    int n2 =sizeof(*a)/sizeof(**a);
    printf("Enter the Elements of Array\n");

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            scanf("%d", &(*(a+i))[j]);
            
        }
    }
    printf("\n");
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            printf("[%d][%d]\t%p\t%d\n" ,i ,j,a[i]+j, *(*(a+i)+j));
            
            
        }
    }

    
    return 0;

}