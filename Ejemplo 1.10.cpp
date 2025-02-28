#include<iostream>

using namespace std;

int main(){
	
	double bas, alt, per, sup;
	
	cout<<"Hola, este programa 1.10 calcula el perimetro y superficie de un rectangulo\n";
	
	cout<<"Digite la altura del rectangulo:";cin>>alt;
	cout<<"Digite la base del rectangulo:";cin>>bas;
	
	per=2*(bas+alt);
	sup=bas*alt;
	
	cout<<"\nEl perimetro del rectangulo es: "<<per<<"\n"<<"La superficie del rectangulo es: "<<sup;
	
	
	return 0;
}