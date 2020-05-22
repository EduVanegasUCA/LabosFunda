#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int num;
    int n=0;
    int proceso;
    string resp;
    cout<<" Ingresa el numero que quieras comprobar con cual numero es divisible"<<endl;
    cin>>num;
    cout<<endl;
    while (n<=num)
    {
        n++;
        proceso = num/n;
        if(num%n ==0){
        cout<<num<<" Se puede dividir entre "<<n<<" y su respuesta es: "<<proceso<<endl<<endl;;
        }
        if(proceso ==0){
            cout<<"Necesitas dividir otro numero? Y=Si"<<endl;
            cin>>resp;
            if(resp=="Si"||resp=="Yes"||resp=="Y"||resp=="si"||resp=="yes"||resp=="y"){
                main();
            }
            break;
        }
    }
    
}