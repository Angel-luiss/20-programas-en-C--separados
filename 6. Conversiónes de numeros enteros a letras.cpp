#include <conio.h>
#include <stdio.h>

int main()
{
    int num;

    printf( "Ingrese un numero entero de (0 a 20): ",20 );
    scanf( "%i", &num );

    if ( num >= 0 && num <= 20 )

    switch ( num )
    {
    case  0 : printf( "\n   cero" ); break;
	case  1 : printf( "\n   uno" ); break;
    case  2 : printf( "\n   dos" ); break;
    case  3 : printf( "\n   tres" ); break;
    case  4 : printf( "\n   cuatro" ); break;
    case  5 : printf( "\n   cinco" ); break;
    case  6 : printf( "\n   seis" ); break;
    case  7 : printf( "\n   siete" ); break;
    case  8 : printf( "\n   ocho" ); break;
    case  9 : printf( "\n   nueve" ); break;
    case 10 : printf( "\n   diez" ); break;
    case 11 : printf( "\n   once" ); break;
    case 12 : printf( "\n   doce" ); break;
    case 13 : printf( "\n   trece" ); break;
    case 14 : printf( "\n   catorce" ); break;
    case 15 : printf( "\n   quince" ); break;
    case 16 : printf( "\n   dieciseis" ); break;
    case 17 : printf( "\n   diecisiete" ); break;
    case 18 : printf( "\n   dieciocho" ); break;
    case 19 : printf( "\n   diecinueve" ); break;
    case 20 : printf( "\n   veinte" ); break;
    }

    else
    printf( "ERROR: El numero debe ser (0 a 20).", 20 );
 
    getch();

    return 0;
}
