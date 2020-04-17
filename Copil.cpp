#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void llenav(int [],int );
void muestrav(int [],int );
void burbujam(int [],int);
void seleccion(int[],int );
main()
{
    int n = 10;
    cout<<"tamano del vector es 10 "<<endl;
    int vector[n];
    llenav(vector,n);
    cout<<"vector inicial es: "<<endl;
    muestrav(vector,n);
    cout<<endl;
    burbujam(vector,n);
    cout<<"\nvector despues de ordenar(burbuja): "<<endl;
    muestrav(vector,n);
    cout<<endl;
    seleccion(vector,n);
    cout<<"\nvector despues de ordenar(seleccion): "<<endl;
    muestrav(vector,n);
    cout<<endl;
}
void llenav(int v[],int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        v[i] = rand ()% 16;
}
void muestrav(int v[],int n)
{
    for (int i = 0; i < n; i++)
        cout<<v[i]<<"\t";
}
void burbujam(int v[],int n)
{
    bool bandera = true;
    int aux, cont = 0;
    for (int i = 0; i < n - 1 && bandera == true; i++)
        {
            bandera = false;
            for (int j = 0; j < n - i - 1;j++)
            {
                cont++;
                if (v[j] > v[j+1])
                {
                    bandera = true;
                    aux = v[j+1];
                    v[j+1] = v[j];
                    v[j] = aux;
                }
            }
        }
    cout<<"\nel numero de compraciones en el metodo burbuja mejorado es: "<<cont;
}
void seleccion(int v[], int n)
{
    int i,j,aux,menor, cont = 0;
    for (i = 0; i < n; i++)
    {

        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if(v[j] < v[menor])
            {
                menor = j;
            }
        }
        cont++;
        aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
    cout<<"\nel numero de comparaciones en el metodo de seleccion es: "<<cont;
}
