#include<iostream>

using namespace std;

int main(){
	
	float rad,alt,vol,are;
	const float pi=3.1416;
	
	cout<<"Este programa 1.5 calcula el area y volumen de una esfera\n";
	
	cout<<"Ingrese el valor de la altura:";cin>>alt;
	cout<<"Ingrese el valor del radio:";cin>>rad;
	
	vol=pi*rad*rad*alt;
	are=2*pi*rad*alt;
	
	cout<<"El area de la esfera es: "<<are<<"\nEl volumen de la esfera es: "<<vol;
	
	return 0;
}