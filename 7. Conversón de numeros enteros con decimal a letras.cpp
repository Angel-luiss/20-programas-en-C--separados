#include<stdio.h>
int main(){
    int num,a,b,c;
    int fil,col,espa,la;
    char caracter;
    char sino;
 
    printf("Para (TRIANGULOS) Ingrese Solo Numeros En (RELLENO) \n\n");
    printf("Para (CUADRADOS) Y RECTANGULO)) Ingrese Solo (*) En (RELLENO)\n\n");
	printf("Introduce Numero De Filas (1-15):");
    scanf("%d",&num);
    printf("numero de espacios:");
    scanf("%d",&espa);
    printf("caracter de relleno:");
    fflush (stdin);
    scanf("%c",&caracter);
    if(caracter>='0' && caracter<='9'){
 
      for (fil=1; fil<=num; fil++)
            {
                for (la=1; la<=num-fil+espa; la++)
                    printf(" ");
                for (col=1; col<=2*fil-1; col++)
                    printf("%c",caracter);
                printf("\n");
            }
   }
      else
 
        for (a=1;a<=num;a++)
 
            {
                for (c=1; c<=espa; c++)
                    printf(" ");
                    {
                        for (b=1;b<=num;b++)
                            printf("%c",caracter);
                        printf("\n");
                    }
            }
        return 0;
}
