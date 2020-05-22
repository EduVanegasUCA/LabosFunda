#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int num;
    string resp;
    cout<<"Que sera el numero que ingreses? Positivo, Negativo o Cero??"<<endl;
   cin>>num;
   cout<<endl;
   if(num>0){
       cout<<num<<" Es positivo!!"<<endl;
   }

   if(num<0){
       cout<<num<<" Es negativo!!"<<endl;
   }

   else{
       cout<<num<<" Es cero!!"<<endl;
   }
}