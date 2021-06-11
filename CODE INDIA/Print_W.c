#include<stdio.h>

int main(){
    int height = 5;
    int width = (2 * height)-1;
    int i, j, counter = height / 2;
    for (i = 0; i < height; i++) 
    {
        printf("*");
        for (j = 0; j <= height; j++) 
        {
            if (j == height)
                printf("*");
            else if ((i >= height / 2)
                    && (j == counter
                    || j == height - counter - 1))
                printf("*");
            else
                printf(" ");
        }
        if (i >= height / 2)
        {
            counter++;
        }
        printf("\n");
    }
}