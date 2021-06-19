#include<stdio.h>
#include <string.h>

int main(void){
    char* p="geeks";
    printf("%lu %lu %lu " ,sizeof(p),sizeof(*p), sizeof("geeks"));
    printf("%lu %lu" ,strlen(p) ,strlen("geeks"));
    
    return 0;

}
/*
Output :
4 1 6
 5 5
 */