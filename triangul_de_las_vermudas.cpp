#include <iostream>
using namespace std;
int main () {
	int base;
	int altura;
	int area1;
	int area2;
	cout<<"ingrese la base del triangulo:";
	cin>>base;
	cout<<"ingrese la altura del triangulo:";
	cin>>altura;
	area1=base*altura;
	area2=area1/2;
	cout<<"el valor del area del triangulo es:"<<area2;
	return 0;
}
