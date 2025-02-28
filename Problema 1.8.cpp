#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float X1,X2,Y1,Y2,dis;
	
	cout<<"Este programa 1.8 calcula la distancia entre dos puntos\n";
	
	cout<<"Ingrese la coordenada x del primer punto:";cin>>X1;
	cout<<"Ingrese la coordenada y del primer punto:";cin>>Y1;
	cout<<"Ingrese la coordenada x del primer punto:";cin>>X2;
	cout<<"Ingrese la coordenada y del primer punto:";cin>>Y2;
		
	dis= sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));
	
	cout<<"La distancia entre el punto "<<X1<<", "<<Y1<<" y el punto  "<<X2<<", "<<Y2<<" es: "<<dis;
	
	return 0;
}
