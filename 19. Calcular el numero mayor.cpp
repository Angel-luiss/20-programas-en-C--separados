#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	int a,b;
	printf("ingrese primer numero\n");
	scanf("%i",&a);
	printf("ingrese segundo numero\n");
	scanf("%i",&b);
	
	if (a>b) {
	printf("El mayor es %i \n");
	} 
	else if (b>a) {
	printf("El mayor es %i \n");
	}
	else{
	printf("Los 2 numeros son iguales %i \n");
	}
system("pause"); 	
return 0;	
}
