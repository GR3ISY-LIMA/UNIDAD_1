#include<iostream>

using namespace std;

int main(){
	
	double costo,pago,devo;
	
	cout<<"Este programa 1.1 imprime el cambio que se debe entregar ante una compra\n";
	
	cout<<"Ingrese el costo del producto:";cin>>costo;
	cout<<"Ingrese la cantidad con la que va pagar:";cin>>pago;
	
	devo=pago-costo;
	
	cout<<"\nEl cambio a entregar es: "<<devo;
	
	return 0;
}