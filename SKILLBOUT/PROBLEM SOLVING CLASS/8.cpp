#include<iostream>
using namespace std;

int main(){
    int i ,x[5] ,y ,z[5];
    for(i=0; i<5;i++){
        x[i] =i;
        z[i] =i+3;
        y=z[i];
        x[i] =y++;
    }

    for(i=0;i<5; i++){
        cout << x[i]<<"";
    }
    
    return 0;

}