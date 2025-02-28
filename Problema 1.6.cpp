#include<iostream>

using namespace std;

int main(){
	
	int dias,seg;
	const float segdia=86400;
	
	cout<<"Este programa 1.6 escribe la cantidad de segundos que hay en un determinado numero de dias\n";
	
	cout<<"Ingrese el numero de dias para calcular los segundos:\n";cin>>dias;
	
	seg=dias*segdia;
	
	cout<<"El numero de segundos que hay en "<<dias<<" dias es: "<<seg;
	
	
	return 0;
}