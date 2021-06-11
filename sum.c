#include<stdio.h>

int main()
{
    

    for(int n =1; n<100; n++)
    {

        if(((n/10) + (n%10)) + ((n/10) *(n%10)) == n)
        {
            printf("%d is special\n" , n);
        }

        else {
            printf("%d is npt special\n" , n);
        }

    }


        
    


}