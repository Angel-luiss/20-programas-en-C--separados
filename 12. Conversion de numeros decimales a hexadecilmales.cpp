#include <stdio.h>

int main(){
	int n, i = 0, hexadecimal[999]; 
    printf("Ingresa un numero en sistema decimal: ");
    scanf("%i",&n);
    while (n!=0)
    {
    hexadecimal[i] = n%16; 
    n = n /16; 
    i++; 
    } i--;
	printf("Resultado en Hexadecimal: ");
 
    while (i>=0) 
    {
    switch(hexadecimal[i]) {
    case 10:
    printf("A"); 
    case 11:
    printf("B"); 
    case 12:
    printf("C"); 
    case 13:
    printf("D"); 
    case 14:
    printf("E"); 
    case 15:
    printf("F"); 
    default:
    printf("%i",hexadecimal[i]); 
    } i--;
    }
    printf("\n");
	return 0;
}
