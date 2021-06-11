#include <stdio.h>
int main()

{
    int a ;
    printf("Enter the table of =\n");
    scanf("%d\n" , &a);
    for(int i =1; i<10; i++){
        a = a*i;
        printf("the table is given as%d\n" , a);
    }
    


    return 0;
}
