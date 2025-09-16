#include <iostream>
using namespace std;
int main () {
	int lado;
	int atributos;
//	int mayor;
//	int area2;
	cout<<"ingrese el lado mayor:";
	cin>>lado;
	cout<<"ingrese los atributos del triangulo:";
	cin>>atributos;
if(atributos>lado)
    {
	cout<<"el triangulo es equilatero";
    }
    else{
        cout<<"no es equilatero";
    }
	return 0;
}
