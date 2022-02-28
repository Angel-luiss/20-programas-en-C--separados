#include <iostream>
#include <cstdlib>

using namespace std;

int tabl = 1;
int tabla = 1;
int resultado;

int main () {
while (tabl <=10) {
	resultado = tabl * tabla;
	cout << tabl << "x" << tabla << "=" << resultado << endl;
	tabla++;
	if (tabla==11) {
	tabla = 1; 
	tabl ++;
	cout << endl;		
	}			
}
system("pause");
return 0;	
	
}
