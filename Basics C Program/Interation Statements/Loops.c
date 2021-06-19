#include <stdio.h>
int main()
{
    int a, i = 0;
    printf("Enter the number\n");
    scanf("%d", &a);
    do
    {
        printf("%d\n", i);
        i++;
        /* code */
    } while (i < a);
    printf("Hello World");

    return 0;
}