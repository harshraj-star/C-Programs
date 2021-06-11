#include<stdio.h>
int main()
{

    int a,b,c;
    printf("%d%d%d\n" ,a ,b,c);
    scanf("%d %d %d\n " , &a,&b,&c);
    printf("%d%d%d" ,a ,b,c);
    a =a+b+c;
    b =a-(b+c);
    c =a-(b+c);
    a =a-(b+c);
    printf("%d%d%d" ,a,b,c);
    return 0;
    
    
}
