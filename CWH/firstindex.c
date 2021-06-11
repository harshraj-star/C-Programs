#include <stdio.h>
#define MAX_SIZE 1000 // Maximum array size

int main()
{
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, N;

    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the number to be searched");
    scanf("%d" , &x);

    int f =firstIndex(arr ,0 ,x);
    printf("The Index value is =", f);
}

int firstIndex(int arr[] , int idx , int x){
    if(idx == sizeof(arr)){
        return -1;
    }
    if(arr[idx] == x){
        return idx;
    }

    else {
        int flisa = firstIndex(arr ,idx+1 , x);
        return flisa;
    }
}