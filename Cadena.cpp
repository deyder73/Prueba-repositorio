//Cadena de caracteres

#include <iostream>
#include <conio.h>
#include <string.h>   //Librería para la cadena de caracteres

using namespace std;

main()
{
    char palabra[]="Andres";
    char palabra2[]={'A','n','d','r','e','s','\0'};   //Siempre se colocan en comillas simples encerradas en llaves. Ultimo elemento es el vacío
    cout<<"La primera palabra ingresada es: "<<palabra<<endl;
    cout<<"La segunda palabra ingresada es: "<<palabra2<<endl;
    char nombre[20];
    cout<<"Digite su nombre: ";
    //cin>>nombre;
    //cout<<"El nombre ingresado con <cin> es: "<<nombre<<endl;
    //gets(nombre);
    //cout<<"El nombre ingresado con <gets> es: "<<nombre<<endl;
    cin.getline(nombre,20,'\n');
    cout<<"El nombre ingresado con <getline> es: "<<nombre<<endl;

}
