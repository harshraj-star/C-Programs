#include<stdio.h>

int main()
{
    int n;
    printf("Enter the input\n");
    scanf("%d" ,&n);

    int d =n;
    
    int ecount=0;
    int ocount=0;

    while(n>0)
    {
        int r =n%10;
        n=n/10;
        if(r%2==0)
        {
            printf("%d" , r);
            ecount++;
        }

        if(r%2!=0)
        {
            printf("%d" , r);
            ocount++;
        }


        

        






    }
    printf("\n Even Count is %d" , ecount);
    printf("\n Odd Count is %d" , ocount);

    

}