#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float l1,l2,l3,s,area;
	const float pi=3.1416;
	
	cout<<"Este programa 1.7 calcula el area de un triangulo\n";
	
	cout<<"digite el valor del primer lado:";cin>>l1;
	cout<<"digite el valor del segundo lado:";cin>>l2;
	cout<<"digite el valor del tercer lado:";cin>>l3;
	
	s=(l1+l2+l3)/2;
	area= sqrt(s*(s-l1)*(s-l2)*(s-l3));
	
	cout<<"El area del triangulo dados los valores de los lados es: "<<area;
	

   return 0;
}