#include<iostream>

using namespace std;

int main(){
	
	float num,cub,cua;
	
	cout<<"Este programa 1.9 calcula el cuadrado y cubo de un numero entero:\n";
	
	cout<<"Digite un numero:";cin>>num;
	
	cua=num*num;
	
	cub=num*num*num;
	
	cout<<"El cuadrado de "<<num<<" es: "<<cua<<"\n"<<"El cubo de "<<num<<" es: "<<cub;
	
	return 0;
}