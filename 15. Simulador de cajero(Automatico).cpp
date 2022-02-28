#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int caj,opc;
	float a,b,c;
	caj=1000;
	printf("Bienevendio a tu cajero Automatico\n");
	printf("Seleccione una opcion\n");
	printf(" 1.Ingresar dinero a  cuena.\n 2.Retirar dinero de la cuenta.\n 3.Saldo en la cuenta.\n 4.Salir del cajero Automatico.\n");
	printf("Seleccione una opcion\n");

	scanf("%i",&opc);
	if(opc==1){
	printf("¿Cuanto dinero desea ingresar al cajero Automatico?\n");
	scanf("%f",&a);
	c=caj+a;
	printf("El dinero a sido ingresado\n");
	printf("Su saldo actual es de %f \n",c);			
	}
	 
	else if (opc==2){
	printf("¿Cuanto dinero desea retirar del cajero Automatico?\n");
	scanf("%f",&b);
	if(b>caj){
	printf("Error el dinero no a sido ingresado. NO DISPONE DE TANTO DINERO. \n");
	printf("\n El saldo actual es de %d\n",caj);
	}else {
	c=caj-b;
	printf("Se a completado exitosamenete el retiro de la cuenta\n");
	printf("Su saldo actual es de %f \n",c);
	}
	}else if(opc==3){
    printf("\n El saldo actual es de %d\n",caj);
    }else if(opc==4){
    printf("\nGracias por utilizar este cajero Automatico.\n\n");
    }else if(opc==0){
    printf("\nDisculpe, se ha equivocado al marcar.\n\n");
	}
	
system("pause");	
}
	
	
	

