#include <iostream>
#include <cstdlib>

using namespace std;
int main () {
	
int tabl = 1;
int tabla = 1;
int resultado;


while (tabl <=10) {
	resultado = tabl * tabla;
	cout << tabl << "x" << tabla << "=" << resultado << endl;
	tabla++;
	if (tabla==2) {
	tabla = 1; 
	tabl ++; cout << endl;		
	}			
}
system("pause");
return 0;	
	
}

