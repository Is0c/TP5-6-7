#include <iostream>
#include <vector>
using namespace std;
int main ()
{
	vector<int> curso1={0};
	vector<int> curso2={0};
	vector<int> curso3={0};
	vector<int> curso4={0};
	vector<int> curso5={0};
	int opcion;
	cout<<"el limite de insrcipcion para cada curso es de 15";
	for(int i=0;i<15;i++) {
		cout<<"seleccione un curso: ";
		cin>>opcion;
		switch(opcion) {
			case 1:
				curso1.push_back(i+1);
			break;
			case 2:
				curso2.push_back(i+1);
			break;
			case 3:
				curso3.push_back(i+1);
			break;
			case 4:
				curso4.push_back(i+1);
			break;
			case 5:
				curso5.push_back(i+1);
			break;
			
			default:
				cout<<"solo puede seleccionar el caso 1 o el 2"<<endl;
			break;
		}
	}
	cout<<"el curso 1 tiene "<<curso1.size()<<" alumnos";
	cout<<"el curso 2 tiene "<<curso2.size()<<" alumnos";
	cout<<"el curso 3 tiene "<<curso3.size()<<" alumnos";
	cout<<"el curso 4 tiene "<<curso4.size()<<" alumnos";
	cout<<"el curso 5 tiene "<<curso5.size()<<" alumnos";
}
