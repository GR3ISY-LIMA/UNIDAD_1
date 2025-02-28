//programa para escribir datos de tipo entero respresentados por A,B,C Y D en orden inverso

#include <iostream>

using namespace std;

int main(){
	
	int A,B,C,D;
	
	cout<<"Hola este es un programa para escribir datos en orden inverso (solo valores enteros)"<<"\n";
	
	cout<<"\n"<<"Digita un valor para A:"<<"\n";
	cin>>A;
	
	cout<<"Digita un valor para B:"<<"\n";
	cin>>B;
	
	cout<<"Digita un valor para C:"<<"\n";
	cin>>C;
	
	cout<<"Digita un valor para D:"<<"\n";
	cin>>D;
	
	cout<<D<<" , "<<C<<" , "<<B<<" , "<<A;
	
	return 0;
}