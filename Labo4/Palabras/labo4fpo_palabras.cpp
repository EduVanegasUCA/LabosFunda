#include <iostream>
#include <math.h>

#include <string.h>


using namespace std;

int main(){
    string poim;
    char word[250];
    int a;
    int i;
    int space = 0;
    int letras =0;
    printf("Ingresa una palabra y te dire cuantas letras tiene y si el numero de letras es par o impar!! ");
    cout<<endl;
    scanf("%[^\n]",&word);

    a= strlen(word);

    for(i=0; i<=a;i++)
    {
        if (word[i] == ' ')
        {
            space++;
        }
        
    }
    letras = a-space;

    if(letras <10){
        printf(word);
    printf(" Tiene ");
    printf("%d",letras);  
    printf(" letras") ;
    printf(" y es menor a 10 caracteres");
    }

    if(letras >10){
        printf(word);
    printf(" Tiene ");
    printf("%d",letras);  
    printf(" letras") ;
    printf(" y es mayor a 10 caracteres");
    }

    poim = (letras%2 ==0)? " Es par" : " Es impar";
    cout<<" ademas "<<letras<<poim<<endl;


}