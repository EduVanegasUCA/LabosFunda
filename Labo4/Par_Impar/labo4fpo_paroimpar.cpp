#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int num;
    string poim;
    cout<<"Tu numero sera par o impar??"<<endl;
    cin>>num;
    cout<<endl;
    poim = (num%2 ==0)? " Es par!!" : " Es impar :(";
    cout<<num<<poim<<endl;

    return 0;
}