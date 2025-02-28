#include <iostream>

using namespace std;

int main(){
	
	float Mat,Cal1,Cal2,Cal3,Cal4,Cal5,Prom;
	
	cout<<"Este programa 1.8 calcula el promedio de calificaciones\n";
	
	cout<<"Ingrese la matricula del alumno:\n";cin>>Mat;
	cout<<"Ingrese la primera calificacion:";cin>>Cal1;
	cout<<"Ingrese la segunda calificacion:";cin>>Cal2;
	cout<<"Ingrese la tercera calificacion:";cin>>Cal3;
	cout<<"Ingrese la cuarta calificacion:";cin>>Cal4;
	cout<<"Ingrese la quinta calificacion:";cin>>Cal5;
	
	Prom=(Cal1+Cal2+Cal3+Cal4+Cal5)/5;
	
	cout<<"El promedio de calificaciones con matrucula "<<Mat<<" es: "<<Prom;
	
	return 0;
}