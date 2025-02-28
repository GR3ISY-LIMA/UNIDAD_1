#include<iostream>
#include<string>

using namespace std;
int main(){
	
	float galones,precio;
	const float galon=3.785, lit=8.20;
	
	cout<<"Este programa 1.4 escribe el precio de la gasolina en litros\n";
	
	cout<<"Ingrese el numero de galones a vender:";cin>>galones;
	
	precio=galones*galon*lit;
	
	cout<<"\nEl precio de la gasolina por "<<galones<<" galones"<<" es: "<<precio;
	
	return 0;
}