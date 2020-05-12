#include <iostream>

using namespace std;

int main(){ 
    int num1;
    int num2;
    int num3;
    cout<<"Ingresa 3 numeros para sacar su promedio\n";
    cin>>num1>>num2>>num3;
    int suma =num1+num2+num3;
    int promedio = suma/3;
    cout<<"El promedio de "<<suma<<" es: "<<promedio<<endl;
    
    return 0;
}