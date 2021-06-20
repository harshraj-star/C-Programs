#include<iostream>
using namespace std;


int max(int &x ,int &y ,int &z){
    if(x>y && y>z){
        y++;
        z++;
        return x++;
    }

    else {
        if(y>x)
        return y++;
        else
        return z++;
    }
}

int main(){
    int A,B;
    int a =10 ,b =13 ,c =8;
    A=max(a,b,b);
    cout<< a++ <<""<<b--<<""<<++c<<endl;
    B= max(a,b,c);
    cout<< ++A <<""<<--B<<""<<c++<<endl;


    return 0;
}

