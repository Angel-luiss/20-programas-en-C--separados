#include <iostream>

using namespace std;

int main (){
	int k; int m; int lb; 
	float a; float b; float c; float d; float e; float f;
	
	printf("Ingresar los Kilometros que desea convertir a Millas \n\n ");
	scanf("%i",&k); 
	a=k/1.60934;
	printf("La kilometros a millas son: %f\n",a);
	b=k*1.60934;
	printf("La conversion viceversa a Kilometros es: %i \n\n\n",k);
	
	printf("Ingresar los de Metros que desea converir a Pulgadas:\n\n");
	scanf("%i",&m);
	c=m*39.3701;
	printf("Los Metros a pulgadas son:%f \n",c);
	d=m/39.3701;
	printf("La conversion viceversa a Metros es:%i \n\n\n",m);

	printf("Ingresar las libras que desea converir a Kilos: \n\n");
	scanf("%i",&lb);
	e=lb*0.453592;
	printf("Las Libras a kilos son: %f \n",e);
	f=lb/0.453592;
	printf("La conversion viceversa a Libras son: %i \n",lb);

	return 0;
}
