#include <iostream>

using namespace std;

int main(){
	
	int A,B,Resultado=0;
	
	cout<<"Hola, este programa 1.7 escribe el resultado de la expresion de datos enteros\n";
	
	cout<<"Ingrese un valor para A:";cin>>A;
	cout<<"Ingrese un valor para B:";cin>>B;
	
	Resultado=(A+B)*(A+B)/3;
	
	cout<<"\nEl resultado de la expresion es:"<<Resultado;

	return 0;
}