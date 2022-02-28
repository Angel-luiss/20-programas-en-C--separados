#include "stdio.h" 
using namespace std;

int min(){
	int x,y,mcd;
	int n1,n2;	

	printf("Digite primer numero positivo:\n");
	scanf("%d", &x);
	printf("Digite segundo numero positivo\n");
	scanf("%d", &y);

	n1=x;
	n2=y;

	while(n1!=n2){
		if (n1>n2)
		n1 -= n2;
		else
		n2 -= n1;
	}
	mcd=n1;
	printf("El m.c.d. de %d y %d es %d\n", x, y, mcd);
}


int main(){
	
	min();	
}
