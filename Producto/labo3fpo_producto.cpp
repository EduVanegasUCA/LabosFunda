#include <iostream>
#include <math.h>

using namespace std;

int main(){
    string name;
    double price;
    int cantidad;
    
    cout<<"Ingresa el nombre del producto"<<endl;
    cin>>name;
    cout<<"Ingresa el precio del producto"<<endl;
    cin>>price;
    cout<<"Ingresa la cantidad comprada"<<endl;
    cin>>cantidad;
    double money = price*cantidad;
    cout<<"El total de dinero gastado es:$"<<money<<endl;
}