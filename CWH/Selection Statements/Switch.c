#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d" , &age);
    switch (age)
    {
    case 17:
        printf("you are not eligible for voting ");
        break;

        case 16:
        printf("you are not eligible for voting ");
        break;

        case 15:
        printf("you are not eligible for voting ");
        break;

        case 14:
        printf("you are not eligible for voting ");
        break;
    
    case 18:
        printf("you are  eligible for voting\n");
        break;

        case 19:
        printf("you are  eligible for voting\n");
        break;

        case 20:
        printf("you are  eligible for voting\n");
        break;

    default:
        printf("you are not eligible due to some technical issues");
        break;
    }
    return 0;
}
