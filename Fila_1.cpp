#include <iostream>
#include <string>
using namespace std;

int Triangulo_1(char s, int n) 
{
	while (n<=0)
        {
        cout << "Este es un número menor o igual a 0, escriba otro mayor a 0" << endl;
		cin>>n;
        }
        int b,esp,l;
	char r;
	for (b=1;b<=n;b++) 
        {
		for (esp=1;esp<=n;esp++) 
        {
			cout<<" ";
		}
		for (l=1;l<=b;l++) 
        {
			cout<<s;
		}
		cout<<" "<<endl;
	}
	for (b=1;b<=n;b++) 
        {
		for (esp=1;esp<=b-1;esp++) 
        {
			cout<<" ";
		}
		for (l=1;l<=n-b+1;l++) 
        {
			cout<<s;
		}
		cout<<" "<<endl;
	}
	return r;
}

int main() 
{
	int n;
	char r,s;
	cout<<"Escriba el símbolo"<<endl;
	cin>>s;
	cout<<"Escriba la dimensión"<<endl;
	cin>>n;
	r=Triangulo_1(s,n);
	cout<<res<<endl;
	return 0;
}