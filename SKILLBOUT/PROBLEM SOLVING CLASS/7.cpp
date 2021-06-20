
#include<iostream>
using namespace std;


int main(){
    char m;
    switch (m)
    {
    case 'c':
        cout<<"Computer Science";
        break;

    case 'm':
        cout<<"Mathematics";
        break;
    case 'a':
        cout<<"Accountant";
        break;
    default:
        cout<<"wrong choice";
    }
    return 0;

}