#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    
    cin>>a>>b>>c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;

    int negativoB = b-b*2;
    int elevacionB = b;
    int rAC = a*c;
    int multi4AC = -4*rAC;
    int divi2A = 2*a;
    int raiz = sqrt(multi4AC);
    int restaBy4AC = elevacionB-raiz;
    int suma = negativoB+restaBy4AC;
    int resta = negativoB-restaBy4AC;
    int resultSuma = suma/divi2A;
    int resultResta = resta/divi2A;

    cout<<resultSuma<<endl<<resultResta<<endl;
}