#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d" ,&age);
    printf("You have eneterde %d as your age\n" , age);

    if (age>=18)
    {
        printf("You can vote");
    }

    else {
        printf("You can't vote");
    }
    
    return 0;
}
