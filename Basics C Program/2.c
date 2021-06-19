#include<stdio.h>
int main()
{
    int n1 ,n2 ,n3;
    printf("Enter the three nums\n");
    scanf("%d %d %d" , &n1 ,&n2 ,&n3);

    if(n1>n2)
    {
        if(n2>n3)
        {
            printf(" Highest order is : %d %d %d" , n1 , n2 ,n3);
        }

        else if(n3>n1)
        {
            printf(" Highest order is : %d %d %d" , n1 , n2 ,n3);
        }

        else
        {
            printf(" lowest order is : %d %d %d" , n3 , n2 ,n1);
        }
    }

    else {
            printf(" Highest order is : %d %d %d" , n1 , n2 ,n3);
        }



        
}