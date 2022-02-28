#include <iostream>
using namespace std;

int main() {
float c;
float d;
	
int s;
	printf("ESCRIBIR DOS NUMEROS\n");
	scanf("%f",&c);
	scanf("%f",&d);
	s = 0;
	
	while (s!=5) {
	printf("ELIGE UNA OPCION \n");
	printf("1 = SUMA\n");
	printf("2 = RESTA\n");
	printf("3 = MULTIPLICACION \n");
	printf("4 = DIVISION\n");
	printf("5 = salir\n");
	scanf("%i",&s);
	switch (s) {
	
	case 1:
	printf("LA SUMA ES %f + %f = %f\n",c,d,c+d);
	break;
	case 2:
	printf("LA RESTA ES %f - %f = %f\n",c,d,c-d);
	break;
	case 3:
	printf("LA MULTIPLICAION ES %f x %f = %f\n",c,d,c*d);
	break;
	case 4:
	printf("LA DIVISION ES %f / %f = %f\n",c,d,c/d);
	break;
	default:
	s = 5;
	}
}
return 0;
}
