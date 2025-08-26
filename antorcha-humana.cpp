#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main () {
	vector<int> skull={39,240,400,72,685,9647,4498,3453,880,754};
	int pos1=0,pos2=1;
	for(int i=1;i<10; i++)
	{
	    if(skull[pos1]>skull[pos2]){
	        cout<<"el vector no esta ordenado de menor a mayor";
	        break;
	    }
	    pos1=i-1;
	    pos2=i;
	}
return 0;
}
