#include<stdio.h>

int main()
{
    
    int n;
    printf("Enter the Input\n");
    scanf("%d" , &n);

    int k =binaryToDeciaml(n);
    printf("Binary to decimal Conversion is\t%d " , k);

}


int binaryToDeciaml(int n)
{
    int ans =0;
    int pow =1;
    while(n>0)
    {
        int rem= n%10;
        n= n/10;
        ans =ans + rem*pow;
        pow*=2;

    }

    return ans;

}

