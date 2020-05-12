#include <iostream>
#include <math.h>
#include <locale.h>


using namespace std;

int main(){
   setlocale(LC_CTYPE, "Spanish");

   string medida;
   string type;
   string elecc;
   cout<<"Que deseas obtener: Perimetro= P o Area= A"<<endl;
   double radio;
   double perimetro;
   cin>>type;

   if(type == "a" || type == "A"|| type=="Á" || type=="á"){
   cout<<"Ingresa que medida deseas (cm o m)"<<endl;
   cin>>medida;

    if (medida == "cm" || medida == "CM")
    {
       cout<<"Ingresa el radio"<<endl;
     cin>>radio;
     double radio2 = pow(radio, 2);
     double pi = 3.1416;
     double area = pi*radio2;
     cout<<"El Area de este circulo es: "<<area<<" cm"<<endl;
     cout<<"Tiene otro radio? Y=si, N=no"<<endl;
     cin>>elecc;
     if (elecc == "Y"|| elecc== "y")
     {
         main();
     }
     else if(elecc == "N"|| elecc == "n")
     {
       cout<<"Okay"<<endl;
     }
     else
     {
         cout<<"Tiene otro radio? Y=si, N=no"<<endl;
     }
    }

    else if (medida == "m" || medida == "M")
    {
       cout<<"Ingresa el radio"<<endl;
      cin>>radio;
     double radio2 = pow(radio, 2);
     double pi = 3.1416;
     double area = pi*radio2;
     cout<<"El Area de este circulo es: "<<area<<" m"<<endl;
     cout<<"Tiene otro radio? Y=si, N=no"<<endl;
     cin>>elecc;
     if (elecc == "Y"|| elecc== "y")
     {
         main();
     }
     else if(elecc == "N"|| elecc == "n")
     {
       cout<<"Okay"<<endl;
     }
     else
     {
         cout<<"Tiene otro radio? Y=si, N=no"<<endl;
     }
     
    }

   else
   {
       main();
   }
   }
   
   if(type == "p" || type == "P"){
       cout<<"Ingresa que medida deseas (cm o m)"<<endl;
   cin>>medida;

    if (medida == "cm" || medida == "CM")
    {
       cout<<"Ingresa el radio"<<endl;
     cin>>radio;
     double pi = 3.1416;
     double pixr = pi*radio;
     double perimetro = pixr*2 ;
     cout<<"El Perimetro de este circulo es: "<<perimetro<<" cm"<<endl;
     cout<<"Tiene otro radio? Y=si, N=no"<<endl;
     cin>>elecc;
     if (elecc == "Y"|| elecc== "y")
     {
         main();
     }
     else if(elecc == "N"|| elecc == "n")
     {
       cout<<"Okay"<<endl;
     }
     else
     {
         cout<<"Tiene otro radio? Y=si, N=no"<<endl;
     }
    }

    else if (medida == "m" || medida == "M")
    {
       cout<<"Ingresa el radio"<<endl;
      cin>>radio;
     double radio2 = pow(radio, 2);
     double pi = 3.1416;
     double perimetro = pi*radio2;
     cout<<"El Perimetro de este circulo es: "<<perimetro<<" m"<<endl;
     cout<<"Tiene otro radio? Y=si, N=no"<<endl;
     cin>>elecc;
     if (elecc == "Y"|| elecc== "y")
     {
         main();
     }
     else if(elecc == "N"|| elecc == "n")
     {
       cout<<"Okay"<<endl;
     }
     else
     {
         cout<<"Tiene otro radio? Y=Si, N=No"<<endl;
     }
     
    }

   else
   {
       main();
   }
   }
   
   
}