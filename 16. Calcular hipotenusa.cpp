#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main() {
	float c1,c2,hipotenusa;
	printf("ingrese cateto 1 \n");
	scanf("%f",&c1);
	printf("ingrese cateto 2 \n");
	scanf("%f",&c2);
	hipotenusa=sqrt(c1*c1+c2*c2);
	printf("la hipotenusa mide %f \n",hipotenusa);
	
return 0; 

}
