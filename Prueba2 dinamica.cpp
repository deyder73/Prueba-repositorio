#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include<cmath>
using namespace std;

bool sw=true;
void vert(float **t)
{
    cout<<"\nTabla de Datos"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<t[i][j]<<"\t";
        }
        cout<<endl;
    }
}


float **reservam(float **t)                          //Devuelve un dato de doble apuntador
{
    t=new float *[3];                                             //Reservo memoria para las filas
    for(int i=0;i<3;i++)
    {
        t[i]=new float [3];                                       //Reservo memoria para las columnas
    }
    return t;
}


void liberam(float **t)
{
    for(int i=0;i<3;i++)
    {
        free(t[i]);                                             //Funcion que libera memoria
    }
    free(t);
}


void llenat(float **t)
{
    srand(time(NULL));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            t[i][j]=rand()%100*0.01+9+rand()%11;
        }
    }
}


int menu(int op)
{
    cout<<"Menú de opciones"<<endl;
    cout<<"\n1)Ver tabla"<<endl;
    cout<<"2)Aumentar Filas"<<endl;
    cout<<"3)Aumentar Columnas"<<endl;
    cout<<"4)Quitar Filas"<<endl;
    cout<<"5)Quitar columnas"<<endl;
    cout<<"6)Salir"<<endl;
    cout<<"\nEscriba una opción: ";
    cin>>op;
    return op;
}

void operacion(int op, float **t1, float **t2, float **aux, int n)
{
    switch(op)
    {
        case 1:
        {
            cout<<"\nIngreso la opción 1"<<endl;
            vert(t1);
            break;
        }
        case 2:
        {
            cout<<"\nIngreso la opción 2";
            cout<<"\n¿Cuántas filas desea aumentar?";
            cin>>n;
            t2=(float **)realloc(t1,n*sizeof(float *));
            for(int i=3;i<(n+2);i++)
            {
                t2[i]=(float *)realloc(t1,2*sizeof(float *));
                for(int j=0;j<3;j++)
                {
                    cout<<"Ingrese dato:\t";
                    cin>>t2[i][j];
                }
            }
            cout<<"\nEl vector nuevo con filas aumentadas es"<<endl;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<t2[i][j]<<"\t";
                }
                cout<<endl;
            }
            break;
        }
        case 3:
        {
            cout<<"Ingreso la opción 3";
            cout<<"\n¿Cuántas columnas desea aumentar?";
            cin>>n;
            t2=(float **)realloc(t1,2*sizeof(float *));
            for(int i=0;i<3;i++)
            {
                t2[i]=(float *)realloc(t1,n*sizeof(float *));
                for(int j=3;j<(n+3);j++)
                {
                    cout<<"Ingrese dato:\t";
                    cin>>t2[i][j];
                }
            }
            cout<<"\nEl vector nuevo con columnas aumentadas es"<<endl;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<t2[i][j]<<"\t";
                }
                cout<<endl;
            }
            break;
        }
        case 4:
        {
            cout<<"Ingreso la opción 4";
            cout<<"\n¿Cuántas filas desea quitar?";
            cin>>n;
            break;
        }
        case 5:
        {
            cout<<"Ingreso la opción 5";
            cout<<"\n¿Cuántas columnas desea quitar?";
            cin>>n;
            break;
        }
        default:
        {
            cout<<"Caracter ingresado incorrecto. Ingrese otra opción: ";
            cin>>op;
            switch(op)
            break;
        }
    }
}


main()
{
    int op=0,n,num;
    float **tabla1, **tabla2, **aux;
    tabla1=reservam(tabla1);
    llenat(tabla1);
    do
    {
        op=menu(num);
        operacion(op,tabla1,tabla2,aux,n);
    }
    while(op!=6);
    //cout<<"Saliendo del sistema";
    //liberam(tabla1);
    //cout<<endl;
    //vert(tabla);*/
}


