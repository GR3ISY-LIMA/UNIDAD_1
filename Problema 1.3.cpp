#include<iostream>
#include<string>

using namespace std;

int main(){
	
	float lon,pes,peskg,lonmet;
	string nom;
	
	
	cout<<"Este programa 1.3 imprime el nombre de un dinosaurio, su peso en kg y longitud en metros\n";
	
	cout<<"Ingrese el nombre del dinosaurio:";cin>>nom;
	cout<<"Escriba el peso del dinosaurio en libras:";cin>>pes;
	cout<<"Escriba la longitud del dinosaurio en pies:";cin>>lon;
	
	peskg= pes*0.453592;
	lonmet=lon*0.3048;
	
	cout<<"\nEl nomnre del dinosaurio es: "<<nom<<"\n"<<"El peso del dinosaurio en kilogramos es: "<<peskg;
	cout<<"\nLa longitud del dinosaurio en metros es: "<<lonmet;	
	
	return 0;
}