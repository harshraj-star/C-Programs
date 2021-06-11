#include<stdio.h>

void main()
{

    struct complex
    {
        double real;
        double img;

    }; 
    struct complex c1 ,c2 ,c3;

    printf("\n Enter the complex numbers : \n\n  Real Part of First Number: \n ");

    scanf("%lf" , &c1.real);

    printf("Imaginary part of first number : \n");
    scanf("lf" , &c1.img);

    printf("Real Part of Second Number: \n ");

    scanf("%lf" , &c2.real);

    printf("Imaginary part of Second number : \n");
    scanf("lf" , &c2.img);

    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.ing;

    printf("The Sum of Two Complex num are : %lf" )


    


}