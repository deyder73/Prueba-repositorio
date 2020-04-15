#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void llenav (int v[], int n)
{
  srand (time (NULL));
  for (int i = 0; i < n; i++)
    v[i] = rand () % 30;
}


void burbuja (int v[], int n)
{
  int aux, cont = 0;
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n - 1; j++)
	{
	  cont++;
	  if (v[j] > v[j + 1])
	    {
	      aux = v[j + 1];
	      v[j + 1] = v[j];
	      v[j] = aux;
	    }
	}
    }
  cout << "\nEl nC:mero de comparaciones son: " << cont << endl;
}

void burbujam (int v[], int n)
{
  bool bandera = true;
  int aux, cont = 0;
  for (int i = 0; i < n; i++)
    {
      bandera = false;
      for (int j = 0; j < n - i - 1 && bandera == true; j++)
	{
	  cont++;
	  if (v[j] > v[j + 1])
	    {
	      bandera = true;
	      aux = v[j + 1];
	      v[j + 1] = v[j];
	      v[j] = aux;
	    }
	}
    }
  cout << "\nEl nC:mero de comparaciones mejorado son: " << cont << endl;
}

int insercion (int v[], int n)
{
  int k = 0, aux, cont = 0;
  for (int i = 0; i < n; i++)
    {
      aux = v[i];
      k = i - 1;
      cont++;
      while (k >= 0 && aux < v[k])
      {
          v[k + 1] = v[k];
          k = k - 1;
      }
      v[k + 1] = aux;
    }
  return cont;
}

void muestrav (int v[], int n)
{
  for (int i = 0; i < n; i++)
    cout << v[i] << "\t";
}


int buscarb (int v[], int n, int cl)
{
  bool bandera;
  int arriba = n, abajo = 0, centro;
  for (int i = 0; abajo<=arriba; i++)
    {
      centro = (arriba + abajo) / 2;
      if (cl == v[centro])
      {
          bandera=true;
          return 0;
      }
      else
      {
          if (cl < v[centro])
          {
              arriba=centro;
          }
          else
          {
              abajo=centro;
          }
          if(cl!=v[centro])
          {
              bandera=false;
              return 0;
          }
      }
      if(bandera==true)
      {
          cout<<"El elemento ingresado se encuentra en la posición v["<<centro<<"]";
      }
      else
      {
          cout<<"Elemento no encontrado";
      }
    }

}

main ()
{
  bool bandera;
  int n, clave, ee;
  cout << "Tamaño del vector: ";
  cin >> n;
  int vector[n];
  llenav (vector, n);
  cout << "Vector antes de ordenar" << endl;
  muestrav (vector, n);
  insercion (vector, n);
  //burbuja(vector,n);
  //burbujam(vector,n);
  cout << "\n" << "Vector despues de ordenar" << endl;
  muestrav (vector, n);
  cout << "\nEl número de comparaciones en insercion es: " <<
    insercion (vector, n) << endl;
  cout << "Elemento a buscar: ";
  cin >> clave;
  buscarb (vector, n, clave);
}
